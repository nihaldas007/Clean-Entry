# 🧴 AutoSanitize: Automatic Alcohol Spray Dispenser

**AutoSanitize** is a smart, touch-free hand sanitizing system that automatically sprays alcohol-based disinfectant when it detects a human hand or body nearby. Designed to reduce physical contact and promote hygiene, it's perfect for public entrances, offices, schools, and hospitals.

---

## ✨ Features

- Touchless operation using **ultrasonic sensor** or **IR proximity sensor**
- Activates **spray pump** (or mist nozzle) automatically
- Built with **Arduino Nano/Uno**
- Quick spray duration to save liquid and reduce waste
- Speaker: Sound alert

---

## 🧰 Components Used

| Component             | Quantity |
|-----------------------|----------|
| Arduino Nano / Uno    | 1        |
| Ultrasonic Sensor (HC-SR04) or IR Sensor | 1        |
| Small Pump or Spray Motor | 1        |
| Relay Module or Transistor Driver | 1        |
| Tubing + Nozzle       | 1 set    |
| Power Supply (5V or 12V depending on pump) | 1        |
| Jumper Wires          | As needed |
| Sound Speaker         | 1 each   |

---

## ⚙️ How It Works

1. A sensor detects the presence of a hand or person.
2. The Arduino triggers the **relay** to activate the **spray pump**.
3. A short spray of alcohol or sanitizer is released.
4. The system waits briefly before becoming active again.
5. The system has a sound alert.
---

## 🔌 Basic Circuit Connections

| Arduino Pin | Connected To             |
|-------------|--------------------------|
| D8 (NewPin) | Trigger (Ultrasonic)     |
| D8 (NewPin) | Echo (Ultrasonic)        |
| D6 (NewPin) | Trigger (Ultrasonic)     |
| D6 (NewPin) | Echo (Ultrasonic)        |
| D7          | Relay IN (to control pump)|
| D9          | Speaker                  |
| GND         | GND                      |
| 5V          | VCC of sensor & relay    |

---

## 📷 Images & Demo

![Setup](images/setup.jpg)
![Spraying](images/spray.jpg)

## 🧠 Possible Upgrades

* Add **LCD/OLED display** for status
* Use a **PIR sensor** for full body detection
* Add **timer-based lockout** between sprays
* Integrate with **ESP8266** for IoT usage (usage log, refill alerts)

---

## 🙌 Contribution

Pull requests, issues, and improvements are welcome!
Help make hygiene smarter and safer for everyone.
