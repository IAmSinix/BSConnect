# BSConnect

- ± 100-500 соединений в секунду.
- Соединения не пропадают без принудительного закрытия.
- Завершить программу ctrl + c

### Установка

```
pkg install git
pkg install clang
git clone https://github.com/IAmSinix/BSConnect
cd BSConnect
g++ app.cpp -o bscon
chmod 777 bscon
./bscon <ip> <port>
```
