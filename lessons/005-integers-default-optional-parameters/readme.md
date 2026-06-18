# Video 05
- Video : [https://youtu.be/6N2fqGMQ41c](https://youtu.be/6N2fqGMQ41c)
- Playlist : [https://www.youtube.com/playlist?list=PLWmM3tw4zswZAjVf1qgPKt0mIfbxEhYpa](https://www.youtube.com/playlist?list=PLWmM3tw4zswZAjVf1qgPKt0mIfbxEhYpa)

[🇹🇷 Türkçe Anlatım](#türkçe-anlatım) | [🇺🇸 English Description](#english-description) | [Uygulama Sonuçları / Outputs](#outputs)

<a name="türkçe-anlatım"></a>
## [TR] Türkçe Anlatım: Python ve C Katmanı Arasında Tamsayı Gönderme
"Python Çekirdek Kodlama (Python Core Programming)" serimizin bu bölümünde, Python'dan C katmanına tamsayı (integer) verilerini nasıl göndereceğimizi ve bu verilerle C tarafında nasıl işlemler yapacağımızı detaylandırıyoruz.

📌 Bu videoda neler öğreneceksiniz?

- *Integer Veri Gönderimi:* Python'daki bir tamsayıyı C fonksiyonuna parametre olarak geçme.
- *PyArg_ParseTuple Kullanımı:* "i" format belirteci ile Python objelerini C'deki int tipine dönüştürme.
- *Veri Döndürme (PyLong_FromLong):* C tarafında işlenen veriyi tekrar Python'un anlayacağı bir objeye paketleyip geri gönderme.
- *Opsiyonel Parametreler:* Pipe (|) operatörü kullanarak fonksiyonlara nasıl varsayılan değerler ve isteğe bağlı parametreler ekleneceğini keşfetme.
- *Pratik Örnek:* C tarafında bir döngü kurarak sayıların toplamını hesaplayan bir fonksiyonun Python extension olarak yazılması.

Python'un performansını C ile artırmak ve dilin derinliklerine inmek isteyenler için hazırladığım bu teknik rehber, extension yazımındaki kritik kuralları ve parametre yönetimini kapsamaktadır.


<a name="english-description"></a>
## [EN] English Explanation: Sending Integers Between Python and C Layers
In this part of our "Python Core Programming" series, we detail how to send integer data from Python to the C layer and how to perform operations on this data on the C side.

📌 What will you learn in this video?

- *Sending Integer Data:* Passing an integer in Python as a parameter to a C function.
- *Using PyArg_ParseTuple:* Converting Python objects to the int type in C using the "i" format specifier.
- *Returning Data (PyLong_FromLong):* Packaging the data processed on the C side back into an object that Python understands and sending it back.
- *Optional Parameters:* Discovering how to add default values ​​and optional parameters to functions using the Pipe (|) operator. - *Practical Example:* Writing a Python extension of a C-based function that calculates the sum of numbers using a loop.

This technical guide, prepared for those who want to improve Python's performance with C and delve deeper into the language, covers critical rules and parameter management in writing extensions.

<a name="outouts"></a>
## outputs
### integer default / optional parameter output
  ![integer default / optional parameter output](c-api-video-lesson5-output.png)

