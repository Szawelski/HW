Podstawy programowania
=====================

Pobranie instalacja i praca z Git
---------------------------------

## Przejscie do katalogu Pulpit

    cd Pulpit/

## Utworzenie katalogu i przejscie do niego

    mkdir first_repo
    cd first_repo/

## Pobranie i instalacja Git

    apt-get install git

## Pobranie i instalacja mc

    apt-get install mc

## Wyswietlenie zawartosci katalogu

    ls -al

## Wyswietlenie pomocy 

    git help

## Wyswietlenie zmian

    git status

## Dodanie plikow do repozytorium

    git add .

## Dodanie komntarza

    git commit -m "pierwsza modyfikack"

## Konfiguracja gita

    git config --global user.email "mojusunietyadresemail@gmail.com"
    git config --global user.name "Szawelski"

## Dodanie komentarza

    git commit -m "utworzenie nowego pliku"

## Utworzenie nowego pliku

    mcedit test.txt 

## Sprawdzenie statusu

    git statusu

## Dodanie pliku do repozytorium

    git add test.txt 

## Dodanie komentarza

    git commit -m "pierwsza zmiana"

## Wyswietlenie zmian w logu

    git log

## Dokonanie zmiany w pliku

    mcedit test.txt 

## Dodanie komentarza

    git commit -m "trzecia zmiana"

## Dodanie pliku do repozytorium

    git add

## Wyslanie zmian do zdalnego repozytorium

    git push -u origin master

## Przeslanie historii do pliku readme.md

    history > readme.md
