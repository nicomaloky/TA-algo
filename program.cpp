#include <iostream>

using namespace std;

int main() {
    //deklarasi
    //double untuk bilangan desimal 16bit
    double celcius, fahrenheit, kelvin, reamur, rankine, sisi, panjang, tinggi, lebar, alas, luas, r, d1, d2, a, b;
    //char untuk satu buah karakter
    char pilihan, pilih_suhu, pilih_bangun, y;
    const double phi = 3.14;
    //awal untuk mengulang program

    awal:
    cout<<"\t=============================================="<<endl;
    cout<<"\t|         SELAMAT DATANG DI PROGRAM          | "<<endl;
    cout<<"\t|KONVERSI SUHU & MENGHITUNG LUAS BANGUN DATAR| "<<endl;
    cout<<"\t=============================================="<<endl;
    cout<<"\t|           DIBUAT OLEH KELOMPOK 4           |"<<endl;
    cout<<"\t|                                            |"<<endl;
    cout<<"\t|     Ayuni Aulia Prihatini    065122003     |"<<endl;
    cout<<"\t|     Nasywa Aura Permata Hati 065122004     |"<<endl;
    cout<<"\t|     Helena Octaviana         065122005     |"<<endl;
    cout<<"\t|     Kaka Maulana             065122029     |"<<endl;
    cout<<"\t|     Nicola Dohara Maloky     065122030     |"<<endl;
    cout<<"\t=============================================="<<endl;
    //pilih program yang mau dijalankan
    cout<<"1. Konversi Suhu\n";
    cout<<"2. Menghitung Luas Bangun Datar\n";
    cout<< "Pilih Program : ";
    cin>> pilihan;
    //switch case untuh memilih jenis program
    switch (pilihan)
    {
    case ('1'):
        system("cls");
    //Program Konversi Suhu
        cout<<"\t=================\n";
        cout<<"\t  Konversi Suhu\n  ";
        cout<<"\t=================\n";
    //pilih suhu yang mau di jalankan
	    cout<< "1. celcius\n";
	    cout<< "2. fahrenheit\n";
	    cout<< "3. kelvin\n";
	    cout<< "4. reamur\n";
	    cout<< "5. rankine\n";
	    cout<< "pilih suhu awal : ";
        cin >>pilih_suhu;
    //If else untuk memilih jenis suhu
    if ( pilih_suhu == ('1'))
    {   system("cls");
        cout<<"\t=================\n";
        cout<<"\t Konversi Celcius\n  ";
        cout<<"\t=================\n";
        cout<< "Masukan suhu celcius : ";
		cin>> celcius;	
		
			fahrenheit = (1.8 * celcius) + 32;
      		kelvin = celcius + 273.15;
     		reamur = celcius * (0.8);
			rankine= (celcius + 273.15) * 1.8;	 	
	    	cout << celcius << " C = " << fahrenheit << " F\n";
     		cout << celcius << " C = " << kelvin 	 << " K\n";
    		cout << celcius << " C = " << reamur 	 << " R\n";
    		cout << celcius << " C = " << rankine 	 <<	" Ra\n";
           //untuk mengulang program atau tidak
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
            //untuk clear program supaya rapih
                system("cls");
                goto awal;
            }
            else{

            }
            
    }
    

    else if(pilih_suhu == ('2'))
    {   system("cls");
        cout<<"\t===================\n";
        cout<<"\tKonversi Fahrenheit\n  ";
        cout<<"\t===================\n";
        cout<< "masukan suhu fahrenheit : ";
		cin>> fahrenheit;

            celcius = (fahrenheit-32) * 0.5555;
            kelvin = (fahrenheit + 459.67) * 0.5555;
            reamur =(fahrenheit-32) * 0.4444;
            rankine = fahrenheit + 459.67;

            cout << fahrenheit << " F = " << celcius << " C\n";
     		cout << fahrenheit << " F = " << kelvin  << " K\n";
    		cout << fahrenheit << " F = " << reamur  << " R\n";
    		cout << fahrenheit << " F = " << rankine <<	"Ra\n"; 
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }
    
    else if (pilih_suhu == ('3'))
    {   system("cls");
        cout<<"\t=================\n";
        cout<<"\t Konversi Kelvin\n  ";
        cout<<"\t=================\n";
        cout<< "masukan suhu kelvin : ";
		cin>> kelvin;

            celcius = kelvin - 273.15;
            fahrenheit = (kelvin * 1.8) - 459.67;
            reamur = 0.8 * (kelvin-273);
            rankine = kelvin * 1.8;

            cout << kelvin << " K = " << celcius     << " C\n";
     		cout << kelvin << " K = " << fahrenheit  << " F\n";
    		cout << kelvin << " K = " << reamur 	 << " R\n";
    		cout << kelvin << " K = " << rankine 	 <<	"Ra\n";
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }

    else if (pilih_suhu == ('4'))
    {   system("cls");
        cout<<"\t=================\n";
        cout<<"\t Konversi Reamur\n  ";
        cout<<"\t=================\n";
        cout<< "masukan suhu reamur : ";
	    cin>> reamur;

            celcius = reamur / 0.8;
            fahrenheit = (reamur * 2.25) + 32;
            kelvin = (reamur / 0.8) + 273.15;
            rankine = (reamur * 2.25) + 491.67;

            cout << reamur << " R = " << celcius     << " C\n";
     		cout << reamur << " R = " << fahrenheit  << " F\n";
    		cout << reamur << " R = " << kelvin 	 << " K\n";
    		cout << reamur << " R = " << rankine 	 <<	"Ra\n";
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }

    else if (pilih_suhu ==('5'))
    {   system("cls");
        cout<<"\t=================\n";
        cout<<"\t Konversi Rankine\n  ";
        cout<<"\t=================\n";
        cout<< "masukan suhu rankine : ";
		cin>> rankine;

            celcius = (rankine - 491.67) * 0.5555 ;
            fahrenheit = rankine - 459.67;
            kelvin = rankine * 0.5555;
            reamur = (rankine / 1.8)  + 273.15 * 0.8;

            cout << rankine << " Ra = " << celcius      << " C\n";
     		cout << rankine << " Ra = " << fahrenheit   << " F\n";
    		cout << rankine << " Ra = " << kelvin 	 	<< " K\n";
    		cout << rankine << " Ra = " << reamur 		<< "R\n";   
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }
    else
    {
        cout<<"Pilihan Tidak Ada\n";
        cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }
    
    break;
    
    
    case ('2') :
        system("cls");
    //Program Menghitung Luas Bangun Datar
        cout<<"\t============================\n";
        cout<<"\tMenghitung Luas Bangun Datar\n";
        cout<<"\t============================\n";
    //pilihan bangun datar yang akan di jalan kan 
        cout<<"1. Segitiga\n";
        cout<<"2. Persegi\n";
        cout<<"3. Persegi Panjang\n";
        cout<<"4. Lingkaran\n";
        cout<<"5. Layang Layang\n";
        cout<<"6. Jajar Genjang\n";
        cout<<"7. Trapesium\n";
        cout<<"Pilih Bangun Datar : ";
        cin>> pilih_bangun;
    //if else untuk memilih jenis bangun Datar
    if (pilih_bangun ==('1'))
    {   system("cls");
        cout<<"\t=================\n";
        cout<<"\t  Luas Segitiga \n ";
        cout<<"\t=================\n";
        //memasukan variabel
        cout<<"Masukan Alas : ";
        cin>> alas;
        cout<<"Masukan Tinggi : ";
        cin>> tinggi;
        //rumus menghitung luas bangun datar
        luas = (alas*tinggi)*0.5;
        cout<<"Luas segitiga adalah : "<<luas<<endl;
        cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
         }
         else{
                
            }
        
    }
        
    else if (pilih_bangun == ('2'))
    {   system("cls");
        cout<<"\t=================\n";
        cout<<"\t  Luas Persegi \n  ";
        cout<<"\t=================\n";
        cout<<"Masukan Panjang Sisi : ";
        cin>> sisi;

        luas = sisi*sisi;
        cout<<"Luas persegi adalah : "<<luas<<endl;
        cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    }   
        
    else if (pilih_bangun == ('3'))
    {   system("cls");
        cout<<"\t======================\n";
        cout<<"\t Luas Persegi Panjang\n ";
        cout<<"\t======================\n";
        cout<<"Masukan Panjang : ";
        cin>> panjang;
        cout<<"Masukan Lebar : ";
        cin>> lebar;

        luas = panjang*lebar;
        cout<<"Luas persegi panjang adalah : "<<luas<<endl;
        cout<< "Ingin diulang? (y/n) ";cin>>y;   
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }    
    }

    else if (pilih_bangun == ('4'))
    {   system("cls");
        cout<<"\t======================\n";
        cout<<"\t    Luas Lingkaran   \n ";
        cout<<"\t======================\n";
        cout<<"Masukan Jari Jari : ";
        cin>>r;

        luas = phi*r*r;
        cout<<"Luas lingkaran adalah : "<<luas<<endl;
        cout<< "Ingin diulang? (y/n) ";cin>>y;
            if  (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }

    }  

    else if (pilih_bangun == ('5'))
    {   system("cls");
        cout<<"\t======================\n";
        cout<<"\t  Luas Layang-Layang \n ";
        cout<<"\t======================\n";
        cout<<"Masukan Diagonal 1 : ";
        cin>>d1;
        cout<<"Masukan diagonal 2 : ";
        cin>>d2;

        luas = 0.5*(d1*d2);
        cout<<"Luas layang-layang adalah : "<<luas<<endl;
        cout<<"Ingin diulang? (y/n) ";cin>>y;
            if (y == 'y')
            {   
                system("cls");
                goto awal;
            }
            else{

            }
    }    
    
    else if (pilih_bangun == ('6'))
    {   system("cls");
        cout<<"\t======================\n";
        cout<<"\t  Luas Jajar Genjang \n ";
        cout<<"\t======================\n";
        cout<<"Masukan Alas : ";
        cin>>alas;
        cout<<"Masukan Tinggi : ";
        cin>>tinggi;

        luas = alas*tinggi;
        cout<<"Luas jajar genjang adalah : "<<luas<<endl;
        cout<<"Ingin diulang? (y/n) ";cin>>y;   
            if (y == 'y')
            {   
                system("cls");
                goto awal;
            }
            else{

            }

    }

    else if (pilih_bangun == ('7'))
    {   system("cls");
        cout<<"\t======================\n";
        cout<<"\t    Luas Trapesium    \n ";
        cout<<"\t======================\n";
        cout<<"Masukan Sisi Atas : ";
        cin>>a;
        cout<<"Masukan Sisi Bawah : ";
        cin>>b;
        cout<<"Masukan Tinggi : ";
        cin>>tinggi;

        luas = 0.5*(a+b)*tinggi;
        cout<<"Luas Trapesium adalah : "<<luas<<endl;
        cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }  
    }    
        
        
        
        
    break;

    default:cout<<"Pilihan Tidak Ada \n";
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{
                
            }
    break;
    }

}