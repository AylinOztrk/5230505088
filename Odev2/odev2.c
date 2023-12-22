#include <stdio.h>

struct Teklif {
  int teklifveren_numara;  // Teklif verenin numaras�n� tutar.
  double teklif;       // Teklif miktar�n� tutar.
};

int main() {
 printf("--------Acik Arttirma Sitesine Hosgeldiniz--------\n\n");
 // Kullan�c�dan teklif veren say�s�n� al�n.
  int teklif_sayisi;
  printf("Lutfen teklif veren kisi sayisini giriniz: ");
  scanf("%d", &teklif_sayisi);

  // Her bir teklifi saklamak i�in bir dizi olu�turuldu.
  struct Teklif teklifler[teklif_sayisi];

  // Her bir teklifi kullan�c�dan al�nan say�da d�ng� kullanarak giri� yap�n.
  int i=0;
  for (i; i < teklif_sayisi; i++) {
    printf("Teklif veren %d. kisi, teklifinizi giriniz: ", i + 1);
    scanf("%lf", &teklifler[i].teklif);
    
    // Teklif verenlere Numara atan�r.
    teklifler[i].teklifveren_numara = i + 1;
  }

  // Verilen en y�ksek teklifi ve kazanan� bulur.
  double en_yuksek_teklif = teklifler[0].teklif;
  int kazanan_teklifveren_numara = teklifler[0].teklifveren_numara;
  int j=1;
  for (j ; j < teklif_sayisi; j++) {
    // Teklifin hangisi y�ksekse, ona g�re g�ncellenir.
    if (teklifler[j].teklif > en_yuksek_teklif) {
      en_yuksek_teklif = teklifler[j].teklif;
      kazanan_teklifveren_numara = teklifler[j].teklifveren_numara;
    }
  }

  // Kazanan� ve �deme miktar�n� ekrana yazd�r�r.
  printf("Acik arttirmayi kazanan numara: %d\n", kazanan_teklifveren_numara);
  printf("Odeme: %.2f TL\n", en_yuksek_teklif);

  return 0;
}

