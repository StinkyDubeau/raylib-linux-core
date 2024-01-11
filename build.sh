if gcc main.c -o ./build/app -O1 -Wall -std=c99 -Wno-missing-braces -I ./include/ -L ./lib/ -lraylib -lGL -lm -lpthread -ldl -lrt -lX11; then
    ./build/app
else
    echo 'Build failed!'
fi