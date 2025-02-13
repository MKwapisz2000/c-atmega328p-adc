# c-atmega328p-adc
ADC implementation on ATmega328P in pure C, without Arduino libraries. Direct register access, optimized for embedded systems.

**Project Description - English**

This project demonstrates how to handle the analog-to-digital converter (ADC) in an ATmega328P microcontroller, used in embedded systems. The implementation in C directly accesses registers, without using Arduino libraries.

Features:

- ADC initialization using registers

- Reading voltage value from A0 and A3 channels

- Controlling LED indicators based on the measured voltage
  
Hardware Requirements:

- ATmega328P (e.g., Arduino Nano or standalone AVR)

- Analog sensor or potentiometer

- Connecting wires

Usage Instructions:

- Compile the code using an AVR C-compatible environment (e.g., Atmel Studio, PlatformIO, AVR-GCC).

- Upload the program to the microcontroller using an ISP programmer.

- Observe the LED indicators changing based on the measured voltage.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

**Opis projektu - Polski**

Ten projekt demonstruje sposób obsługi przetwornika analogowo-cyfrowego (ADC) w mikrokontrolerze ATmega328P, używanym w systemach wbudowanych. Implementacja w języku C korzysta z bezpośredniego dostępu do rejestrów, bez użycia bibliotek Arduino.

Funkcjonalność:

- Inicjalizacja ADC przy użyciu rejestrów

- Odczyt wartości napięcia na kanale A0 oraz A3

- Obsługa mikrokontrolera ATmega328P w czystym C

Wymagania sprzętowe:

- ATmega328P (np. Arduino Nano lub standalone AVR)

- Czujnik analogowy lub potencjometr

- Przewody połączeniowe

Instrukcja użytkowania:

- Skompiluj kod w środowisku obsługującym AVR C (np. Atmel Studio, PlatformIO, AVR-GCC).

- Wgraj program do mikrokontrolera przy użyciu programatora ISP.

- Obserwuj zapalanie się diod w zależności od odczytanego napięcia. 

