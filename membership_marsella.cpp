#include <iostream>
#include <string>

using namespace std;



int main() {
	int hargaBarang,jumlahBarang,pilihan;
    string namaPelanggan,statusMember,namaBarang;
    int totalBelanja = 0;
    int totalPoin = 0;
	char ulang;

    do {
    	cout<<"=========  SAKINAH MARKET =========\n";
        cout << "Menu Program:\n";
        cout << "1. Isi Nama Pelanggan\n";
        cout << "2. Pembelanjaan\n";
        cout << "3. Informasi Pelanggan\n";
        cout << "4. Keluar\n";
        cout<<"===================================\n";
        cout << "Pilih menu (1-4): ";		 
        cin >> pilihan;
		
        switch (pilihan) {
            case 1:
                cout << "Masukkan Nama Pelanggan: ";
                cin>>namaPelanggan;
                break;

            case 2:
                {
                    

                    do {
                        cout << "Masukkan Nama Barang: ";
                        cin>>namaBarang;

                        cout << "Masukkan Harga Barang: ";
                        cin >> hargaBarang;

                        cout << "Masukkan Jumlah Barang: ";
                        cin >> jumlahBarang;

                        totalBelanja += hargaBarang * jumlahBarang;

                        cout << "Apakah Ingin Mengulang (y/t)? ";
                        cin >> ulang;
                    } while (ulang == 'y' || ulang == 'Y');
                }
                break;

            case 3:
            	
            	totalBelanja += hargaBarang*jumlahBarang;
                totalPoin = totalBelanja/10000;
                
                if (totalBelanja >= 0 && totalBelanja < 10000000) {
                    statusMember = "Silver";
                } else if (totalBelanja >= 10000000 && totalBelanja < 20000000) {
                    statusMember = "Gold";
                } else if (totalBelanja >= 20000000 && totalBelanja <= 30000000) {
                    statusMember = "Platinum";
                }
				
				

                cout << "========Informasi Pelanggan:========\n";
                cout << "Nama Pelanggan: " << namaPelanggan << endl;
                cout << "Status Member: " << statusMember << endl;
                cout << "Jumlah Poin: " << totalPoin << endl;
                break;

            case 4:
                cout << "Terima kasih, keluar dari program.\n";
                break;

            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
        }

    } while (pilihan != 4);

    return 0;
}
