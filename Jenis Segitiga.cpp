#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <string>

using namespace std;

void menu1();
void judul();
void gambar();
void loading();
void sisi();
void sisi2();
void sudut2();

int main(){
        system("cls");
        system("title MENU");
        cout<<"============================== \n" ;      //untuk menampilkan
        cout<<"||   Perhitungan Segitiga   ||"<<"\n";    //judul program
        cout<<"=============================="<<"\n";    //di layar
        int q;
        cout<<"\nTekan [1] untuk MULAI!\nTekan [2] untuk KELUAR!\n\n";
        cin>>q;                         //Memasukkan nilai q
        if(q==2){
            goto exit;
        }
        while(q<1||q>2)
        {
            cout<<"Kesalahan input! , Silahkan coba lagi! \n";  //Jika nilai q yang diinput tidak 0 maka akan terjadi looping berupa menampilkan text "Kesalahan input! , Silahkan coba lagi!"
            cin>>q;
        }
        loading();
    ulang:
        judul();
        gambar();
        cout<<"Program telah di mulai! \n"<<endl;
        cout<<"\n";
        cout<<"Apa yang diketahui? (Ketik angka untuk memilih)\n1.Jika diketahui sisinya\n2.Jika diketahui 2 sudut 1 sisi\n3.Jika diketahui 1 sudut 2 sisi"<<endl;
        cin>>q;

        while(q<1||q>3)
        {
            cout<<"Kesalahan input silahkan coba lagi!"<<endl;
            cin>>q;
        }

        switch(q){
        case 1 :
           judul();
           gambar();
            sisi();
            break;
        case 2 :
            judul();
            gambar();
            sudut2();
            break;
        case 3 :
            judul();
            gambar();
            sisi2();
            break;
        }
        cout<<endl;

    cout << "\n";
    cout << "        Terimakasih!\nSemoga Program Ini Bermanfaat!"<<endl<<endl; //menampilkan teks

pilihan:
    int x;
    cout<<"Tekan 1 untuk MENU"<<endl;
    cout<<"Tekan 2 untuk KELUAR"<<endl;
    cin>>x;

    while (x<1||x>2){
        cout<<"Kesalahan Input! Silakan coba lagi!\n";
        cin>>x;
    }
    switch (x){
        case 1 :
            goto ulang;
            break;
        case 2 :
            goto exit;
            break;


    }

exit:
    system("cls");
    Sleep(250);
    cout<<"G";
    Sleep(250);
    cout<<"O";
    Sleep(250);
    cout<<"O";
    Sleep(250);
    cout<<"D";
    Sleep(250);
    cout<<"B";
    Sleep(250);
    cout<<"Y";
    Sleep(250);
    cout<<"E";
    Sleep(250);
    cout<<"!";
    Sleep(1000);
    system("exit");



    return 0;
}

void loading(){
system("cls");
for(int i=1;i<13;i++){
    judul();
    cout<<"Loading the program! Please wait! ";
    Sleep(250);
    cout<<". ";
    Sleep(250);
    cout<<". ";
    Sleep(250);
    cout<<". ";
    Sleep(250);
    system("cls");

}
}

void sisi2(){
    system("title 2 SISI DIKETAHUI");
    system("color 1A");
    double A,B,C,x,y,z,q,luas,keliling;
    float pi=3.14;
        cout<<"Sisi A = ";
        cin>>A;

        cout<<"Sisi B = ";
        cin>>B;

        cout<<"Sudut a = ";
        cin>>x;
        cout<<endl;

        y=round(asin(((sin(x*pi/180)*B)/A))*180/pi);
        cout<<"Sudut b = "<<y<<endl;

        z=180-(x+y);
        cout<<"Sudut c = "<<z<<endl;

        C=round((A/sin(x*pi/180))*(sin(z*pi/180)));
        cout<<"Sisi C = "<<C<<endl;

         if((x+y+z)!=180)
        {
            cout<<"(Karena terjadi pembulatan sehingga jumlah sudut segitiga tidak pas 180)"<<endl;
        }

        cout<<endl;
        //Rumus luas
        luas=((A*B)/2)*sin(z*pi/180);
        cout<<"Luas Segitiga = "<<luas<<endl;

        //Keliling
        keliling=A+B+C;
        cout<<"Keliling Segitiga = "<<keliling<<endl;

        cout<<"\n";

        if(x==0||y==0||z==0) //jika nilai x/0 atau y=0 atau z=0 akan menampilkan teks berikut
            cout<<"Bangunan tersebut bukanlah segitiga! \n";

        else if(x!=x||y!=y||z!=z) //jika dihasilkan not a number akan menampilkan teks berikut
            cout<<"Bangunan tersebut bukan segitiga! \n";

        else if(z==90||x==90||y==90) //jika nilai z=90 maka akan menampilkan teks sebagai berikut
            cout<<"Karena salah satu sudutnya 90 derajat maka segitiga tersebut ADALAH Segitiga Siku - Siku \n";

        else if(x==y&&x!=z||y==z&&y!=x||x==z&&x!=y) //jika nilai x = y dan x tidak sama dengan z maka akan menampilkan teks berikut
            cout<<"Karena terdapat dua sudut yang sama besar maka segitiga tersebut ADALAH Segitiga sama kaki \n";

        else if(x!=y&&y!=z&&x!=z) //jika nilai x,y,dan z tidak ada yang sama maka akan menampilkan teks berikut
            cout<<"Karena setiap sudut tidak ada yang sama maka  segitiga tersebut ADALAH Segitiga Sembarang \n";

        else //jika semua ketentua if tidak terpenuhi akan menampilkan teks berikut
            cout<<"Karena setiap sudut memiliki besar sudut yang sama maka segitiga tersebut ADALAH Segitiga Sama Sisi \n";
}

void sudut2(){
    system("title 2 SUDUT DIKETAHUI");
    system("color 2D");
    double A,B,C,x,y,z,q,luas,keliling;
    float pi=3.14;

        cout<<"Sudut a = ";
        cin>> x;

        cout<<"Sudut b = ";
        cin>>y;

        cout<<"Sisi A = ";
        cin>>A;
        cout<<endl<<endl;

        z=180-(x+y);
        cout<<"Sudut c = "<<z<<endl;

        B=round((A/sin(x*pi/180))*(sin(y*pi/180)));
        cout<<"Sisi B = "<<B<<endl;

        C=round((A/sin(x*pi/180))*(sin(z*pi/180)));
        cout<<"Sisi C = "<<C<<endl;

         if((x+y+z)!=180)
        {
            cout<<"(Karena terjadi pembulatan sehingga jumlah sudut segitiga tidak pas 180)"<<endl;
        }

        cout<<endl;
        //Rumus luas
        luas=((A*B)/2)*sin(z*pi/180);
        cout<<"Luas Segitiga = "<<luas<<endl;

        //Keliling
        keliling=A+B+C;
        cout<<"Keliling Segitiga = "<<keliling<<endl;

        cout<<"\n";

        if(x==0||y==0||z==0) //jika nilai x/0 atau y=0 atau z=0 akan menampilkan teks berikut
            cout<<"Bangunan tersebut bukanlah segitiga! \n";

        else if(x!=x||y!=y||z!=z) //jika dihasilkan not a number akan menampilkan teks berikut
            cout<<"Bangunan tersebut bukan segitiga! \n";

        else if(z==90||x==90||y==90) //jika nilai z=90 maka akan menampilkan teks sebagai berikut
            cout<<"Karena salah satu sudutnya 90 derajat maka segitiga tersebut ADALAH Segitiga Siku - Siku \n";

        else if(x==y&&x!=z||y==z&&y!=x||x==z&&x!=y) //jika nilai x = y dan x tidak sama dengan z maka akan menampilkan teks berikut
            cout<<"Karena terdapat dua sudut yang sama besar maka segitiga tersebut ADALAH Segitiga sama kaki \n";

        else if(x!=y&&y!=z&&x!=z) //jika nilai x,y,dan z tidak ada yang sama maka akan menampilkan teks berikut
            cout<<"Karena setiap sudut tidak ada yang sama maka  segitiga tersebut ADALAH Segitiga Sembarang \n";

        else //jika semua ketentua if tidak terpenuhi akan menampilkan teks berikut
            cout<<"Karena setiap sudut memiliki besar sudut yang sama maka segitiga tersebut ADALAH Segitiga Sama Sisi \n";
}

void sisi(){
    system("title SISI DIKETAHUI");
    system("color 4B");
    double A,B,C,x,y,z,q,luas,keliling;
    float pi=3.14;

    //Menampilkan text "Sisi A= " kemudian menginput nilai A
        cout<<"Sisi A = ";
        cin>>A;

        //Menampilkan text "Sisi B= " kemudian menginput nilai B
        cout<<"Sisi B = ";
        cin>>B;

        //Menampilkan text "Sisi C= " kemudian menginput nilai C
        cout<<"Sisi C = ";
        cin >>C;

        cout<<"\n";

        //Rumus menentukan nilai sudut x
        x=round(acos(((pow(B,2))+(pow(C,2))-(pow(A,2)))/(2*B*C))*180/pi);
        cout<<"<a = "<<x<<" Derajat"<<endl; //menampilkan "<x =" dan nilai x dan "Derajat"

        cout<<"\n";

        //Rumus menentukan nilai sudut y
        y=round(acos(((pow(A,2))+(pow(C,2))-(pow(B,2)))/(2*A*C))*180/pi);
        cout<<"<b = "<<y<<" Derajat"<<endl; //menampilkan "<y =" dan nilai y dan "Derajat"

        cout<<"\n";

        //Rumus menentukan nilai sudut z
        z=round(acos(((pow(A,2))+(pow(B,2))-(pow(C,2)))/(2*A*B))*180/pi);
        cout<<"<c = "<<z<<" Derajat"<<endl; //menampilkan "<z =" dan nilai z dan "Derajat"
        if((x+y+z)!=180)
        {
            cout<<"(Karena terjadi pembulatan sehingga jumlah sudut segitiga tidak pas 180)"<<endl;
        }

        cout<<endl;
        //Rumus luas
        luas=((A*B)/2)*sin(z*pi/180);
        cout<<"Luas Segitiga = "<<luas<<endl;

        //Keliling
        keliling=A+B+C;
        cout<<"Keliling Segitiga = "<<keliling<<endl;

        cout<<"\n";

        if(x==0||y==0||z==0) //jika nilai x/0 atau y=0 atau z=0 akan menampilkan teks berikut
            cout<<"Bangunan tersebut bukanlah segitiga! \n";

        else if(x!=x||y!=y||z!=z) //jika dihasilkan not a number akan menampilkan teks berikut
            cout<<"Bangunan tersebut bukan segitiga! \n";

        else if(z==90||x==90||y==90) //jika nilai z=90 maka akan menampilkan teks sebagai berikut
            cout<<"Karena salah satu sudutnya 90 derajat maka segitiga tersebut ADALAH Segitiga Siku - Siku \n";

        else if(x==y&&x!=z||y==z&&y!=x||x==z&&x!=y) //jika nilai x = y dan x tidak sama dengan z maka akan menampilkan teks berikut
            cout<<"Karena terdapat dua sudut yang sama besar maka segitiga tersebut ADALAH Segitiga sama kaki \n";

        else if(x!=y&&y!=z&&x!=z) //jika nilai x,y,dan z tidak ada yang sama maka akan menampilkan teks berikut
            cout<<"Karena setiap sudut tidak ada yang sama maka  segitiga tersebut ADALAH Segitiga Sembarang \n";

        else //jika semua ketentua if tidak terpenuhi akan menampilkan teks berikut
            cout<<"Karena setiap sudut memiliki besar sudut yang sama maka segitiga tersebut ADALAH Segitiga Sama Sisi \n";
}

void judul ()
{
            system("cls");
        cout<<"============================== \n" ;
        cout<<"||   Perhitungan Segitiga   ||"<<"\n";
        cout<<"=============================="<<"\n\n";
}

void gambar(){
        cout<<"              /\\ \n";
        cout<<"             /b \\ \n";
        cout<<"            /----\\ \n";
        cout<<"           /      \\ \n";
        cout<<"       A  /        \\  C \n";
        cout<<"         /          \\ \n";
        cout<<"        /            \\ \n";
        cout<<"       /_            _\\ \n";
        cout<<"      /c )          ( a\\ \n";
        cout<<"      ------------------ \n";
        cout<<"               B   "<<endl;

        cout<<endl;
}

void menu1()
{

}






