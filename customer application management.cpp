// customer application management.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Customer {

    string name;
    string email;
    int age;

};

void addCustomer(vector<Customer>& customers) {

    Customer newCustomer;
    cout << "Customer Name: ";
    cin >> newCustomer.name;
    cout << "Customer Email: ";
    cin >> newCustomer.email;
    cout << "Customer Age: ";
    cin >> newCustomer.age;

    customers.push_back(newCustomer);
    cout << "The customer has been successfully added." << endl;

}

void listCustomers(const vector<Customer>& customers) {

    cout << "----- Customer List -----" << endl;
    for (const auto& customer : customers) {

        cout << "Name: " << customer.name << endl;
        cout << "Email: " << customer.email << endl;
        cout << "Age: " << customer.age << endl;
        cout << "-----------------" << endl;

    }

}

int main()
{

    vector<Customer> customers;
    while (true) {

        cout << "1.Add customer" << endl;
        cout << "2. List customers" << endl;
        cout << "3. Exit" << endl;
        cout << "Make your selection: ";
        int choice;
        cin >> choice;
        switch (choice) {

            case 1:
                addCustomer(customers);
                break;

            case 2:
                listCustomers(customers);
                break;
            case 3:
                cout << "Exiting the program..." << endl;
                break;

            default:
                cout << "Invalid selection!" << endl;
                break;

        }

    }

    return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
