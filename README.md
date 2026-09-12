# ESP32-S3 Anti-AFK USB Keyboard 🎮

*[Scroll down for English 🇬🇧](#english)*

## العربية 🇸🇾
هذا المشروع عبارة عن كود أردوينو بسيط مخصص للوحة **ESP32-S3**. يقوم بتحويل اللوحة إلى لوحة مفاتيح (USB HID Keyboard) تقوم بالضغط على أزرار عشوائية لتجنب الطرد من الألعاب بسبب الخمول (Anti-AFK).

### ✨ المميزات:
- **محاكاة بشرية:** يضغط على الأزرار الأساسية (W, A, S, D, Space) بشكل عشوائي.
- **تأخير عشوائي:** يستخدم `randomSeed` وفترات تأخير متغيرة بين النقرات (من 5.5 إلى 6.5 ثوانٍ) لمنع أنظمة الحماية من اكتشاف النمط الآلي.
- **توصيل وتشغيل مباشر:** بمجرد توصيل اللوحة بالكمبيوتر، تبدأ بالعمل تلقائياً ككيبورد.

### 🚀 طريقة التشغيل:
1. قم بتحميل وتثبيت [Arduino IDE](https://www.arduino.cc/en/software).
2. تأكد من إضافة حزم لوحات ESP32 إلى البرنامج.
3. افتح ملف `ESP32_Anti_AFK.ino`.
4. اختر نوع اللوحة: `ESP32S3 Dev Module` (وتأكد من تفعيل خيار `USB CDC On Boot` إذا لزم الأمر).
5. ارفع الكود (Upload) إلى اللوحة.

---

## English 🇬🇧
This is a simple Arduino sketch for the **ESP32-S3** board. It acts as a USB HID Keyboard that presses random movement keys to prevent getting kicked for inactivity (AFK) in games.

### ✨ Features:
- **Human-like Behavior:** Randomly presses common gaming keys (W, A, S, D, Space).
- **Randomized Delays:** Uses `randomSeed` and variable delays (5.5s to 6.5s) between actions to bypass basic macro-detection algorithms.
- **Plug & Play:** Once flashed, simply plug the ESP32-S3 into any PC, and it will be recognized as a USB keyboard.

### 🚀 How to Use:
1. Download and install [Arduino IDE](https://www.arduino.cc/en/software).
2. Install the ESP32 board package in the Boards Manager.
3. Open the `ESP32_Anti_AFK.ino` file.
4. Select `ESP32S3 Dev Module` from the boards menu (make sure `USB CDC On Boot` is enabled if required by your specific board).
5. Upload the sketch.

---
*⚠️ **Disclaimer / تنبيه:** Use this responsibly. Some games strictly prohibit automated inputs and macros.*