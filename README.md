# Tugas 2 Struktur Data dan Algoritma

Diky Wahyudi (2108107010031)

## Cara Penggunaan

Pertama, build file menggunakan perintah berikut

### **Build Files**
Untuk melakukan **Build Files** bisa menggunakan 2 cara :
1. Menggunakan makefile 
    ```bash
    make build
    ```
2. Menggunakan program bash
    ```bash
    bash run.sh -b
    ```

### **Generate Random Number**
Untuk mengenerate angka random dan dijadikan kedalam file
```bash
bash run.sh -g
```

### **Sort File**
```bash
Usage: run.sh [ -b ] [ -r SORTING_ALGORITHM ] [ -g ] 
[ -f filename]
        -b       build sorting file
        -g       generate random number
        -r       run sorting algorithm
        [SORTING_ALGORITHM]
         bubble          sort using bublesort
         selection       sort using selection
         insertion       sort using insertion
         merge           sort using merge
         quick           sort using quick
         shell           sort using shell
         heap            sort using heap
```

Contoh Penggunaan
```bash
bash run.sh -r merge -f 10000.txt
```
