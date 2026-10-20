# calc-c

Jednostavan kalkulator komandne linije napisan u C-u. Projekat služi za vežbu rada s Gitom i GitHubom.

## Prevođenje

    make

## Upotreba

    ./build/calc 5 + 3
    ./build/calc 10 - 4
    ./build/calc --version

## Testovi

    make test

## Struktura

- `include/calc.h` – deklaracije funkcija
- `src/calc.c` – logika kalkulatora
- `src/main.c` – komandna linija
- `tests/test_calc.c` – jedinični testovi

## Licenca

MIT
Clone added this.
