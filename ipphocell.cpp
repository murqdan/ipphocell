    #include<iostream>
    #include<windows.h>
    #include <stdio.h>
    #include<conio.h>
    using namespace std;

    char judul();
    char beranda();
    int mesin_kasir();
    int login();
    int tentang_program();
    int tentang_programer();
    int cara_menggunakan();
    int opsi;
    char pil;

    void salah() {
      cout << endl;
      cout << "\t\t\t***********************************************************" << endl;
      cout << "\t\t\t                 Anda Salah Memasukkan Kode                " << endl;
      cout << "\t\t\t***********************************************************" << endl;
      getche();
    }

    int main() {
      system("color f2");
      login();
      home:
        system("cls");
      judul();
      beranda();
      cout << endl;
      cout << "\t\t\t" << "Masukkan pilihan [1..5] : ";
      cin >> opsi;
      switch (opsi) {
      case 1:
        system("cls");
        mesin_kasir();
        break;
      case 2:
        system("cls");
        tentang_program();
        break;
      case 3:
        system("cls");
        tentang_programer();
        break;
      case 4:
        system("cls");
        cara_menggunakan();
        break;
      case 5:
        cout << endl << "\t\t\tAnda yakin ingin keluar? [Y/T] : ";
        pil = getche();
        if (pil == 'Y' || pil == 'y') {
          exit(0);
        } else {
          goto home;
        }
        break;
      default:
        salah();
        goto home;
        exit(0);
        break;
      }
      cout << endl << "\t\t\tKembali ke awal? [Y/T] : ";
      pil = getche();
      if (pil == 'T' || pil == 't') {
        exit(0);
      } else {
        goto home;
      }

      return 0;
    }

    #include<iostream>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
    
    char judul();
    int login() {
      int a;
      char ch;
      for (a = 1; a <= 3; a++)

      {
        string user = "";
        string pss = "";
        judul();
        cout << endl;
        cout << "\t\t\t\t\tUsername   :   ";
        getline(cin, user);
        cout << "\t\t\t\t\tPassword   :   ";
        ch = _getch();
        while (ch != 13) {
          pss.push_back(ch);
          cout << '*';
          ch = _getch();
        }
        if (user == "admin" && pss == "admin123") // LOGIN
        {

          cout << endl;
          cout << endl;
          cout << "\t\t\t***********************************************************\n";
          cout << "\t\t\t     	             LOGIN BERHASIL                       \n";
          cout << "\t\t\t     	           SILAKAN TEKAN ENTER                    \n";
          cout << "\t\t\t***********************************************************\n\n";
          getch();
          return 0;
        } else {
          cout << endl;
          cout << endl;
          cout << "\t\t\t***********************************************************\n";
          cout << "\t\t\t              Maaf Username / Password Salah!              \n";
          cout << "\t\t\t***********************************************************\n\n";
          getch();
          system("cls");
        }
      }
      while (a <= 3); {
        cout << "\t\t\t***********************************************************" << endl;
        cout << "\t\t\t                     !!! WARNING !!!                       " << endl;
        cout << "\t\t\t***********************************************************" << endl;
        cout << "\t\t\t                                                           " << endl;
        cout << "\t\t\t                  Anda Telah 3x Memasukan                  " << endl;
        cout << "\t\t\t              Username dan Password Yang Salah             " << endl;
        cout << "\t\t\t                                                           " << endl;
        cout << "\t\t\t***********************************************************" << endl;
        cout << "\t\t\t                Mohon Maaf Anda Kami Blokir                " << endl;
        cout << "\t\t\t                       Terima Kasih                        " << endl;
        cout << "\t\t\t***********************************************************" << endl;
        getch();
        exit(0);
      }
    }

    #include<iostream>
    using namespace std;
    
    char judul() {
      cout << "\t\t\t***********************************************************" << endl;
      cout << "\t\t\t              RESPONSI ALGORITMA PEMROGRAMAN               " << endl;
      cout << "\t\t\t***********************************************************" << endl;
    }
    char beranda() {
      cout << endl;
      cout << "\t\t\tHome : " << endl;
      cout << endl;
      cout << "\t\t\t 1. Mesin kasir" << endl;
      cout << "\t\t\t 2. Tentang Program" << endl;
      cout << "\t\t\t 3. Tentang Programmer" << endl;
      cout << "\t\t\t 4. Cara menggunakan" << endl;
      cout << "\t\t\t 5. Keluar" << endl;
    }

    #include<iostream>
    using namespace std;
    
    char menu_merk() {
      cout << "\t\t\tMerk  : " << endl;
      cout << "\t\t\tA. Iphone      B. Samsung" << endl;
      cout << "\t\t\tC. Oppo        D. Asus" << endl;
    }
    char menu_jenisA() {
      cout << endl;
      cout << "\t\t\tJenis : " << endl;
      cout << "\t\t\t1. Iphone X @ Rp18.999.000,-" << endl;
      cout << "\t\t\t2. Iphone 7 @ Rp9.200.000,-" << endl;
      cout << "\t\t\t3. Iphone 6 @ Rp4.399.000,-" << endl;
    }
    char menu_jenisB() {
      cout << endl;
      cout << "\t\t\tJenis : " << endl;
      cout << "\t\t\t1. Samsung Galaxy J5 Pro    @ Rp2.269.000,-" << endl;
      cout << "\t\t\t2. Samsung Galaxy S8        @ Rp6.699.000,-" << endl;
      cout << "\t\t\t3. Samsung Galaxy S9        @ Rp9.849.000,-" << endl;
    }
    char menu_jenisC() {
      cout << endl;
      cout << "\t\t\tJenis : " << endl;
      cout << "\t\t\t1. Oppo A83 @ Rp2.199.000,-" << endl;
      cout << "\t\t\t2. Oppo A71 @ Rp1.699.000,-" << endl;
      cout << "\t\t\t3. Oppo F5  @ Rp3.499.000,-" << endl;
    }
    char menu_jenisD() {
      cout << endl;
      cout << "\t\t\tJenis : " << endl;
      cout << "\t\t\t1. Asus Zenfone 5Q          @ Rp3.199.000,-" << endl;
      cout << "\t\t\t2. Asus Zenfone Max Pro M1  @ Rp2.250.000,-" << endl;
      cout << "\t\t\t3. Asus Zenfone 4 Selfie    @ Rp2.099.000,-" << endl;
    }

    #include<iostream>
    #include<conio.h>
    #include<stdio.h>
    #include<windows.h>
    #include<fstream>
    using namespace std;

    int itl, jenis[10][10], jml[10], harga[10][10];
    char merk[10][10];
    string hp[10][10];
    long int diskon[10], total[10] = {
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0
    }, tot_bayar[10] = {
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0
    };
    long bayarr, kembalian;

    struct pilihan {
      int a, n, b;
    };

    pilihan pelengkap;
    struct data {
      string tanggal, nama, id_pelanggan, id_alamat;
    }
    isi[10];

    char judul();
    char menu_merk();
    char menu_jenisA();
    char menu_jenisB();
    char menu_jenisC();
    char menu_jenisD();
    int discount(float x, float y);
    int bayar(float x, float y);
    int jml_bayar(float x, float y, float z);
    void salah();
    int mesin_kasir() {
      awal: judul();
      cout << endl;
      cout << "\t\t\t Masukkan banyak costumer    : ";cin >> pelengkap.n;
      cout << "\t\t\t---------------------------------";

      for (pelengkap.a = 0; pelengkap.a < pelengkap.n; pelengkap.a++) {
        cout << endl;
        cout << "\t\t\tCostumer ke-" << pelengkap.a + 1 << endl;
        cout << "\t\t\tTanggal (DD-MM-YYYY)           : ";
        cin >> isi[pelengkap.a].tanggal;
        cout << "\t\t\tNama                           : ";
        cin >> isi[pelengkap.a].nama;
        cout << "\t\t\tNo.Pelanggan                   : ";
        cin >> isi[pelengkap.a].id_pelanggan;
        cout << "\t\t\tAlamat Nama                    : ";
        cin >> isi[pelengkap.a].id_alamat;
        cout << "\t\t\tJumlah barang yang akan dibeli : ";
        cin >> jml[pelengkap.a];
        for (pelengkap.b = 0; pelengkap.b < jml[pelengkap.a]; pelengkap.b++) {
          cout << endl;
          cout << "\t\t\t           Barang ke-" << pelengkap.b + 1 << "" << endl;
          cout << "\t\t\t--------------------------------" << endl;
          menu_merk();
          cout << "\t\t\tPilih merk diatas [A-D]  : ";
          cin >> merk[pelengkap.a][pelengkap.b];
          switch (merk[pelengkap.a][pelengkap.b]) {
          case 'A':
          case 'a':
            menu_jenisA();
            cout << "\t\t\tPilih jenis diatas [1-3] : ";
            cin >> jenis[pelengkap.a][pelengkap.b];
            switch (jenis[pelengkap.a][pelengkap.b]) {
            case 1:
              hp[pelengkap.a][pelengkap.b] = "Iphone X                  ";
              harga[pelengkap.a][pelengkap.b] = 18999000;
              break;
            case 2:
              hp[pelengkap.a][pelengkap.b] = "Iphone 7                  ";
              harga[pelengkap.a][pelengkap.b] = 9200000;
              break;
            case 3:
              hp[pelengkap.a][pelengkap.b] = "Iphone 6                  ";
              harga[pelengkap.a][pelengkap.b] = 4399000;
              break;
            default:
              salah();
              system("cls");
              goto awal;
              break;
            }
            break;
          case 'B':
          case 'b':
            menu_jenisB();
            cout << "\t\t\tPilih jenis diatas [1-3] : ";
            cin >> jenis[pelengkap.a][pelengkap.b];
            switch (jenis[pelengkap.a][pelengkap.b]) {
            case 1:
              hp[pelengkap.a][pelengkap.b] = "Samsung Galaxy J5 Pro     ";
              harga[pelengkap.a][pelengkap.b] = 2269000;
              break;
            case 2:
              hp[pelengkap.a][pelengkap.b] = "Samsung Galaxy S8         ";
              harga[pelengkap.a][pelengkap.b] = 6699000;
              break;
            case 3:
              hp[pelengkap.a][pelengkap.b] = "Samsung Galaxy S9         ";
              harga[pelengkap.a][pelengkap.b] = 9849000;
              break;
            default:
              salah();
              system("cls");
              goto awal;
              break;
            }
            break;
          case 'C':
          case 'c':
            menu_jenisC();
            cout << "\t\t\tPilih jenis diatas [1-3] : ";
            cin >> jenis[pelengkap.a][pelengkap.b];
            switch (jenis[pelengkap.a][pelengkap.b]) {
            case 1:
              hp[pelengkap.a][pelengkap.b] = "Oppo A83                  ";
              harga[pelengkap.a][pelengkap.b] = 2199000;
              break;
            case 2:
              hp[pelengkap.a][pelengkap.b] = "Oppo A71                  ";
              harga[pelengkap.a][pelengkap.b] = 1699000;
              break;
            case 3:
              hp[pelengkap.a][pelengkap.b] = "Oppo F5                   ";
              harga[pelengkap.a][pelengkap.b] = 3499000;
              break;
            default:
              salah();
              system("cls");
              goto awal;
              break;
            }
            break;
          case 'D':
          case 'd':
            menu_jenisD();
            cout << "\t\t\tPilih jenis diatas [1-3] : ";
            cin >> jenis[pelengkap.a][pelengkap.b];
            switch (jenis[pelengkap.a][pelengkap.b]) {
            case 1:
              hp[pelengkap.a][pelengkap.b] = "Asus Zenfone 5Q           ";
              harga[pelengkap.a][pelengkap.b] = 3199000;
              break;
            case 2:
              hp[pelengkap.a][pelengkap.b] = "Asus Zenfone Max Pro M1   ";
              harga[pelengkap.a][pelengkap.b] = 2250000;
              break;
            case 3:
              hp[pelengkap.a][pelengkap.b] = "Asus Zenfone 4 Selfie     ";
              harga[pelengkap.a][pelengkap.b] = 2099000;
              break;
            default:
              salah();
              system("cls");
              goto awal;
              break;
            }
            break;
          default:
            salah();
            system("cls");
            goto awal;
            break;
          }
        }
        system("cls");
        judul();
      }
      system("cls");
      for (pelengkap.a = 0; pelengkap.a < pelengkap.n; pelengkap.a++) {
        judul();
        cout << endl;
        cout << "\t\t\tCostumer ke-" << pelengkap.a + 1 << endl;
        cout << endl;
        cout << "\t\t\tNama           : " << isi[pelengkap.a].nama;
        cout << "\t\t\tTanggal      : " << isi[pelengkap.a].tanggal << endl;
        cout << "\t\t\tNo.Pelanggan   : " << isi[pelengkap.a].id_pelanggan;
        cout << "\t\t\tAlamat Nama  : " << isi[pelengkap.a].id_alamat << endl;
        cout << endl;
        cout << "\t\t\tRincian pembelian  " << endl;
        for (pelengkap.b = 0; pelengkap.b < jml[pelengkap.a]; pelengkap.b++) {
          cout << "\t\t\t" << pelengkap.b + 1 << ". " << hp[pelengkap.a][pelengkap.b] << "\t=\tRp " << harga[pelengkap.a][pelengkap.b] << ",-" << endl;
          total[pelengkap.a] = bayar(harga[pelengkap.a][pelengkap.b], total[pelengkap.a]);
        }
        cout << "\t\t\t-----------------------------------------------------+" << endl;
        cout << "\t\t\tTotal                   \t=\tRp " << total[pelengkap.a] << ",-" << endl;
        if (total[pelengkap.a] >= 10000000) {
          diskon[pelengkap.a] = discount(total[pelengkap.a], diskon[pelengkap.a]);
          tot_bayar[pelengkap.a] = jml_bayar(total[pelengkap.a], diskon[pelengkap.a], tot_bayar[pelengkap.a]);
        } else {
          tot_bayar[pelengkap.a] = total[pelengkap.a];
        }
        cout << "\t\t\tDiskon                  \t=\tRp " << diskon[pelengkap.a] << ",-" << endl;
        cout << "\t\t\tTotal yang harus dibayar\t=\tRp " << tot_bayar[pelengkap.a] << ",-" << endl;
        cout << "\t\t\tBayar                   \t=\tRp ";
        cin >> bayarr;
        kembalian = bayarr - tot_bayar[pelengkap.a];
        cout << "\t\t\tUang Kembalian          \t=\tRp " << kembalian << ",-" << endl;
        cout << "\t\t\t===========================================================" << endl;
      }

    }

    int discount(float x, float y) {
      y = x * 10 / 100;
      return (y);
    }
    int bayar(float x, float y) {
      y += x;
      return (y);
    }
    int jml_bayar(float x, float y, float z) {
      z = x - y;
      return (z);
    }

    #include<iostream>
    #include<fstream>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
    
    int tentang_program() {
      cout << "\t\t\t***********************************************************" << endl;
      cout << "\t\t\t                     IPPHOCELL V.20.01                     " << endl;
      cout << "\t\t\t    sebuah program kasir untuk kebutuhan toko handphone    " << endl;
      cout << "\t\t\t***********************************************************" << endl;
    }

    #include<iostream>
    #include<fstream>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
    
    int tentang_programer() {
      cout << "\t\t\t***********************************************************" << endl;
      cout << "\t\t\t                  MUHAMMAD RAFIQUL ADNAN                   " << endl;
      cout << "\t\t\t                        19.11.3247                         " << endl;
      cout << "\t\t\t                                                           " << endl;
      cout << "\t\t\t                      S1 Informatika                       " << endl;
      cout << "\t\t\t               Universitas Amikom Yogyakarta               " << endl;
      cout << "\t\t\t                                                           " << endl;
      cout << "\t\t\t                  follow my ig : murqdan                   " << endl;
      cout << "\t\t\t***********************************************************" << endl;
    }

    #include<iostream>
    #include<fstream>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
    
    int cara_menggunakan() {
      cout << "\t\t\t***********************************************************" << endl;
      cout << "\t\t\t       Pada prinsipnya, cara menggunakan program ini       " << endl;
      cout << "\t\t\t    sama dengan halnya menjalankan cek pulsa pada gawai    " << endl;
      cout << "\t\t\t Anda hanya perlu menginputkan nomor/huruf yang diinginkan " << endl;
      cout << "\t\t\t             sesuai dengan opsi yang tersedia              " << endl;
      cout << "\t\t\t***********************************************************" << endl;
    }
