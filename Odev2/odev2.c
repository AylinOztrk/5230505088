#include <stdio.h>

struct Teklif {
  int teklifveren_numara;  // Teklif verenin numarasını tutar.
  double teklif;       // Teklif miktarını tutar.
};

int main() {
 printf("--------Acik Arttirma Sitesine Hosgeldiniz--------\n\n");
 // Kullanıcıdan teklif veren sayısını alın.
  int teklif_sayisi;
  printf("Lutfen teklif veren kisi sayisini giriniz: ");
  scanf("%d", &teklif_sayisi);

  // Her bir teklifi saklamak için bir dizi oluşturuldu.
  struct Teklif teklifler[teklif_sayisi];

  // Her bir teklifi kullanıcıdan alınan sayıda döngü kullanarak giriş yapın.
  int i=0;
  for (i; i < teklif_sayisi; i++) {
    printf("Teklif veren %d. kisi, teklifinizi giriniz: ", i + 1);
    scanf("%lf", &teklifler[i].teklif);
    
    // Teklif verenlere Numara atanır.
    teklifler[i].teklifveren_numara = i + 1;
  }

  // Verilen en yüksek teklifi ve kazananı bulur.
  double en_yuksek_teklif = teklifler[0].teklif;
  int kazanan_teklifveren_numara = teklifler[0].teklifveren_numara;
  int j=1;
  for (j ; j < teklif_sayisi; j++) {
    // Teklifin hangisi yüksekse, ona göre güncellenir.
    if (teklifler[j].teklif > en_yuksek_teklif) {
      en_yuksek_teklif = teklifler[j].teklif;
      kazanan_teklifveren_numara = teklifler[j].teklifveren_numara;
    }
  }

  // Kazananı ve ödeme miktarını ekrana yazdırır.
  printf("Acik arttirmayi kazanan numara: %d\n", kazanan_teklifveren_numara);
  printf("Odeme: %.2f TL\n", en_yuksek_teklif);

  return 0;
}

