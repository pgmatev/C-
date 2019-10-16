#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CollectionException : exception {
  public:
    const char* what(){
      return "Less than 5 models";
    }
};

class ModelException : exception {
  public:
    const char* what(){
      return "Model doesn't have a name";
    }
};

class RepeatingException : exception{
  public:
    const char* what(){
      return "Multiple models with the same name";
    }
};

class BrandException : exception{
  public:
    const char* what(){
      return "Brand's name is less than 5 char";
    }
};

class IndexException: exception{
  public:
    const char* what(){
      return "The index is greater than the ammount of models";
    }
};

class CarCatalogue{
  private:
    string name = "Audi";
    vector<string> models;
  public:
    CarCatalogue(){
      name = "";
      models;
    }
    CarCatalogue(string brand, vector<string> models1){
      if(models1.size() < 5){ throw CollectionException(); }
      for(auto i : models1){
        if(i.empty()){ throw ModelException(); }
      }
      if(brand.size() < 5){ throw BrandException(); }
      for(int i = 0; i < models1.size(); i++){
        for(int k = i+1; k < models1.size(); k++){
            if(models1[i] == models1[k]){ throw RepeatingException();}
        }
      }
      name = brand;
      models = models1;
    }
    void getBrand(){
      cout << name << endl;
    }
    void getModels(){
      for(auto i : models){
        cout << i << endl;
      }
    }
    void addModel(string model_name){
      if(model_name.empty()){ throw ModelException(); }
      for(auto i : models){
        if(i == model_name){ throw RepeatingException(); }
      }
      models.push_back(model_name);
    }
    int hasModel(string model_name){
      for(auto i : models){
        if(i == model_name)return 1;
      }
      return 0;
    }
    // toString(){
    //   stringstream s()
    // }
    void removeModelAt(int index){
      if(index >= models.size()){ throw IndexException();}
      models.erase(models.begin()+index);
    }
    void replaceModelAt(int index, string model_name){
      if(index >= models.size()){ throw IndexException();}
      if(model_name.empty()){ throw ModelException(); }
      if(hasModel(model_name)){ throw RepeatingException();}
      models[index] = model_name;
    }
};

int main(){
  vector<string> v;
  v.push_back("A5");
  v.push_back("A4");
  v.push_back("R1");
  v.push_back("R2");
  v.push_back("R3");
  //v.push_back("A5");
  try{
  CarCatalogue Cars("Audi1", v);
  Cars.getBrand();
  Cars.getModels();
  cout << endl;
  Cars.addModel("A6");
  Cars.getModels();
  cout << endl;
  cout << Cars.hasModel("A6") << endl;
  Cars.removeModelAt(5);
  Cars.getModels();
  cout << endl;
  Cars.replaceModelAt(0, "A4");
  Cars.getModels();
  cout << endl;
  }catch(CollectionException ce){
    cout << ce.what() << endl;
  }catch(ModelException ce){
    cout << ce.what() << endl;
  }catch(BrandException ce){
    cout << ce.what() << endl;
  }catch(RepeatingException ce){
    cout << ce.what() << endl;
  }catch(IndexException ce){
    cout << ce.what() << endl;
  }

}