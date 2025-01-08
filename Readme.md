# Levenshtein Algoritması

Bu proje, iki metin arasındaki **Levenshtein Mesafesi**'ni hesaplamak için yazılmış bir uygulamadır. Levenshtein Mesafesi, iki metin arasındaki en küçük düzenleme sayısını (ekleme, silme, değiştirme) hesaplayan bir algoritmadır. Program ayrıca, kullanıcıya matrisin basılıp basılmayacağını belirleme seçeneği sunar.

## İçindekiler
- [Proje Açıklaması](#proje-açıklaması)
- [Kurulum ve Derleme](#kurulum-ve-derleme)
- [Kullanım](#kullanım)
- [Argümanlar](#argümanlar)

## Proje Açıklaması

Bu proje, iki cümleyi karşılaştırmak ve Levenshtein Mesafesi'ni hesaplamak için geliştirilmiştir. Program, kullanıcının verdiği iki cümleyi kıyaslar ve bunlar arasındaki minimum düzenlemeleri hesaplar.

Ayrıca, kullanıcıya isteğe bağlı olarak hesaplanan matrisin ekranda yazdırılmasını sağlama imkanı da sunulur. Bu matris, her iki metnin karakterleri arasındaki tüm dönüşüm adımlarını gösterir.

## Kurulum ve Derleme

Proje, "Makefile" kullanarak derlenebilir. Aşağıdaki adımları takip ederek projeyi derleyebilir ve çalıştırabilirsiniz.

### 1. Bağımlılıklar
- C derleyicisi (örneğin GCC veya Clang)
- Make

### 2. Derleme Adımları

Proje klasörünü açın ve terminal üzerinden şu komutu girin: `make`
Bu komut bin/MacOS ve bin/Windows dizinlerinde çalıştırılabilir dosyaları oluşturacaktır. Size uygun olanı kullanabilirsiniz.

## Kullanım

`bin/MacOS/levenshtein` ve `bin/Windows/levenshtein.exe` dosyaları oluştuktan sonra ilgili dizinlerde programı aşağıda gösterilen şekilde çalıştırabilirsiniz:

### MacOS için
bin/MacOS dizinindeyken terminalde:
```
./levenshtein <string 1> <string 2> <matrix_flag>
```
### Windows için
bin/Windows dizinindeyken terminalde veya powershell üzerinde:
```
levenshtein.exe <string 1> <string 2> <matrix_flag>
```
Yazarak çalıştırabilirsiniz.

## Argümanlar

  * **String 1** ve **String 2** yerine karşılaştıracağınız kelimeleri yazmalısınız, örneğin:
    ```
    ./levenshtein test rest
    ```
    Eğer boşluk içeren bir ifade veya cümle kullanacaksanız **""** arasına cümlelerinizi yazabilirsiniz, örneğin:
    ```
    ./levenshtein "Bu bir test cümlesi." "Bu biretss tcümlesfi."
    ```
    gibi.
  * **matrix_flag** argümanı, uygulama çalıştığında hesaplamanın yapıldığı matrisi görmeniz için ekrana yazdırılmasını sağlayan bir özelliktir. Eğer 1 yazarsanız matris ekrana basılır, eğer 0 veya başka bir şey yazarsanız matris ekrana basılmaz. Bu özellik default olarak 0 değerindedir yani bu argüman yerine bir şey yazmazsanız matris ekrana yazılmayacaktır.
    Örneğin:
    ```
    ./levenshtein kelimetest testkelime 1
    ```
    Bu kod ekrana matrisi de yazdıracaktır.
    ```
    ./levenshtein kelimetest testkelime
    ./levenshtein kelimetest testkelime 0
    ./levenshtein kelimetest testkelime asdasd
    ```
    Bu üç kod matrisi ekrana yazdırmayacaktır.

  * Eğer hiç argüman kullanılmazsa; program, main.c içerisinde bulunan kodda önceden verilmiş olan 2 stringi karşılaştıracaktır ve default olarak matrisi de yazdıracaktır.
    İstenirse kıyaslanacak stringler değiştirilecek şekilde kod düzenlenerek tekrar `make` ile çalıştırılabilir dosyalar oluşturulup argümansız bir şekilde çalıştırılabilir. 





