# cpython-extension-internals
Exploring CPython internals by re-implementing built-in functions in C. | Python'un çekirdek yapısını ve C-API dünyasına keşif yolculuğu.

# 👨‍🍳 CPython Extension Internals

[🇹🇷 Türkçe Anlatım](#türkçe-anlatım) | [🇺🇸 English Description](#english-description) | [Playlist](#playlist)


---

<a name="türkçe-anlatım"></a>
## 🏗 [TR] Türkçe Anlatım: Python'un Balkonunu İnşa Etmek

Python devasa bir bina gibidir. Çoğu geliştirici bu binanın odalarında yaşar (kütüphaneleri kullanır). Bu projede, binanın dışına çıkıp C dilini kullanarak çekirdek yapıya bitişik bir **"Balkon"** inşa ediyorum. Amacımız, Python'un mutfağına (CPython C-API) inerek dilin aslında nasıl çalıştığını anlamak.

### 🍱 Şefin Metaforu
* **Müşteri (Kullanıcı):** Python kodu yazan kişi.
* **Garson (Python):** Siparişi (kodu) alan aracı.
* **Şef (C):** Mutfakta (RAM) yemeği asıl pişiren güç.

---

<a name="english-description"></a>
## 🏗 [EN] English Description: Building the Python Balcony

Python is like a giant building. Most developers live inside its rooms (using libraries). In this project, I'm stepping outside to build a **"Balcony"** attached directly to the core structure using C. The goal is to explore the CPython C-API to understand how Python works under the hood.

### 🍱 The Chef's Analogy
* **Customer (User):** The one writing Python code.
* **Waiter (Python):** The interface that takes orders.
* **Chef (C):** The one in the kitchen (RAM) who actually cooks the meal.

---

<a name="playlist"></a>
## 📺 Video Serisi & Oynatma Listesi / Playlist
**[▶️ Tüm Seriyi İzle (Oynatma Listesi)](https://www.youtube.com/playlist?list=PLWmM3tw4zswZAjVf1qgPKt0mIfbxEhYpa)**
*Bu seri, Python'un temellerinden başlayıp çekirdek (core) geliştirmeye kadar uzanan bir yolculuktur.*
