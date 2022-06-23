#/bin/sh
gcc raw.c -o ppm &&
./ppm $1 &&
rm -fr ppm &&
echo "el proyecto $1 se creo exitosamente!!"
