İlk olarak teklifveren_numara ve teklif tanımladığımzda sistem teklif veren kişinin numarasını aklında tutar aynı zamanda teklif verenin verdiği miktarı da aklında tutar.
Kullanıcıdan teklif sayısı alınır.
struct Teklif teklifler[teklif_sayisi]; ile her bir teklifi saklamak için bir dizi oluşturulur.
Her bir teklifi,kullanıcıdan alınan sayıda döngü kullanarak giriş yapılır.
teklifler[i].teklifveren_numara = i + 1; ile Teklif veren kişilere numara atanır.
 double en_yuksek_teklif = teklifler[0].teklif; ve  int kazanan_teklifveren_numara = teklifler[0].teklifveren_numara; ile verilen en yüksek teklif ve kazanan kişi bulunur.
 if ile teklifin hangisi yüksekse ona göre güncellenir.
 son olarak printf ile kazananı ve ödeme miktarını ekrana yazdırır.
 sonuç olarak ekranda kazanan kişiyi ve ödediği miktaarı görebiliriz.
