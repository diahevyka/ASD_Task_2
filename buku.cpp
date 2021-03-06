/**
    KELAS     : IF 40-02
    KELOMPOK  : Kelompok 4
    NAMA(NIM) : [Joel Andrew][1301164165Lucky Olivera][1301164055] , [Rangga Dwi A][1301164030] , [Diah Hevyka M][1301164336]
**/

#include "buku.h"

buku create_buku(string judul, string pengarang) {
    /**

    * fungsi mengeset buku b dengan judul, dan pengarang
    * dan mengembalikan hasilnya
    **/
    buku b;
    //=================================================
    // YOUR CODE STARTS HERE
    b.judul = judul;
    b.pengarang = pengarang;

    // YOUR CODE ENDS HERE
    //=================================================
    return b;
}

void pinjam_buku(buku &b, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset tanggal pinjam dari buku b dengan tgl, bln, thn,
    * dan mengeset status pinjam menjadi true
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal pinjam
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    b.Terakhir_dipinjam =  create_tanggal(tgl,bln,thn);
    b.tersedia = false;
    // YOUR CODE ENDS HERE
    //=================================================
}

int kembalikan_buku(buku &b, int tgl, int bln, int thn) {
    /**
    * fungsi mengeset status pinjam menjadi false
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal kembali
    * fungsi mengembalikan selisih hari dari tanggal pinjam ke tanggal kembali
    * dengan menggunakan fungsi selisih_hari
    **/
    int selisih;
    //=================================================
    // YOUR CODE STARTS HERE
    b.tersedia = true;
    selisih = selisih_hari(b.Terakhir_dipinjam,create_tanggal(tgl,bln,thn));

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;
}


void tampil_buku(buku b) {
    /**
    * fungsi menampilkan judul, pengarang, dan status dipinjam dari buku b
    * contoh output:
            Judul Buku : XXXXXXX,
            Pengarang  : AAAA AAAAAAA,
            Status     : dipinjam
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<< "\nJudul buku : "<< b.judul<< endl;
    cout<< "Pengarang : "<< b.pengarang<< endl;
    if(b.tersedia == true){
        cout<< "Tersedia\n";
    } else {
        cout<< " Dipinjam ";
        tampil_tanggal(b.Terakhir_dipinjam);
        cout<< endl;
    }


    // YOUR CODE ENDS HERE
    //=================================================
}
