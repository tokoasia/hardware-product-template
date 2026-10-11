# 📦 [SKU / Nama Produk] - Tokoasia Hardware Guide

[![Tokoasia](https://img.shields.io/badge/Tokoasia-Verified-brightgreen?style=flat-square)](https://github.com/tokoasia)
[![Platform](https://img.shields.io/badge/Platform-Arduino%20%7C%20ESP32%20%7C%20Python-blue?style=flat-square)](https://github.com/tokoasia)
[![License](https://img.shields.io/badge/License-MIT-green.svg?style=flat-square)](LICENSE)

Panduan resmi, diagram wiring, source code, dan video demo untuk produk **[Nama Produk / SKU]** dari [Tokoasia](https://shopee.co.id/tokoasia).

---

## 📋 Spesifikasi Singkat
- **Chip / Controller:** [e.g., ESP32-WROOM-32 / Radar LD2410 / DHT22]
- **Tegangan Operasional:** 3.3V - 5.0V DC
- **Antarmuka Komunikasi:** I2C / SPI / UART / GPIO
- **Dimensi:** [e.g., 25mm x 15mm]
- **Konsumsi Arus:** ~15mA (standby), ~50mA (peak)

---

## 🔌 Skema Wiring (Pinout Connection)

### Koneksi ke ESP32 / Arduino:
| Pin Modul | Pin Mikrokontroler (ESP32) | Pin Arduino Uno | Keterangan |
| :--- | :--- | :--- | :--- |
| **VCC** | 3.3V / 5V | 5V | Sumber Tegangan Positif |
| **GND** | GND | GND | Ground Bersama |
| **TX / SDA** | GPIO 16 (RX2) / GPIO 21 | A4 (SDA) / Pin 2 | Data Transmit / I2C SDA |
| **RX / SCL** | GPIO 17 (TX2) / GPIO 22 | A5 (SCL) / Pin 3 | Data Receive / I2C SCL |

> 📌 *Catatan:* Periksa kembali level tegangan logika sebelum menyalakan daya untuk menghindari kerusakan modul.

---

## 💻 Cara Menjalankan Kode (Quick Start)

### Opsi 1: Arduino IDE / ESP32
1. Buka folder `arduino/` pada repositori ini.
2. Buka file `arduino.ino` menggunakan Arduino IDE.
3. Install library yang dibutuhkan melalui **Tools > Manage Libraries...** (jika ada).
4. Pilih board yang sesuai (misal: *ESP32 Dev Module* atau *Arduino Uno*).
5. Sambungkan modul sesuai tabel wiring di atas, lalu klik **Upload**.
6. Buka **Serial Monitor** pada baudrate `115200`.

### Opsi 2: Python / Raspberry Pi
1. Masuk ke folder `python/`.
2. Jalankan perintah instalasi dependensi:
   ```bash
   pip install pyserial
   ```
3. Jalankan script:
   ```bash
   python demo.py
   ```

---

## 🎥 Video Demonstrasi & Tutorial
Tonton tutorial video pengujian alat ini:
- 📺 **YouTube Demo:** [Tautan Video Demo di sini](https://youtube.com)
- 📱 **TikTok Showcase:** [Tautan Video Singkat di sini](https://tiktok.com)

---

## ❓ FAQ & Troubleshooting
1. **Serial Monitor tidak menampilkan data / karakter acak?**
   - Pastikan baud rate pada Serial Monitor sama dengan kode program (`115200`).
2. **Sensor tidak terdeteksi di bus I2C?**
   - Jalankan program *I2C Scanner* untuk memastikan alamat modul sudah benar.
3. **Apakah butuh resistor pull-up?**
   - Untuk jalur I2C jarak > 20cm, tambahkan resistor pull-up 4.7kΩ pada SDA & SCL ke 3.3V.

---

## 🛒 Pembelian Produk
Produk ini dapat dibeli resmi di:
- [Shopee Tokoasia](https://shopee.co.id/tokoasia)
- [Tokopedia Tokoasia](https://tokopedia.com)

---
<div align="center">
  <sub>Dilindungi lisensi MIT • <b>Tokoasia</b> • Make. Build. Play.</sub>
</div>
