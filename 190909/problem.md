## 19.09.09. 문제

- [x] N의 배수를 cnt개 출력 (file : MultipleOutput)
    * idea (Pseudo Code)
    ```c
        get input, cnt;
        for(i = 1; i <= cnt; i++) {
            print input*i;
        }
    ```

- [x] N이 주어졌을 때 N이 거듭제곱인지 확인.(file : PowerCheck)
    * idea (Pseudo Code)
    ```c
        get input;

        result is 0
        while (i * i <= input) {
            if i*i is input
                result is i;
                break;
        }

        if result is not 0
            print result;
        else print "Not a Power";
    ```
- [x] 주사위를 10만번 던졌을때 나온 갯수를 출력하시요. (file : dice)
    * idea (Pseudo Code)
    ```c
        rand seed is time()

        arr[7] -index is number;

        for(i = 1; i <= diceMax; i++) {
            random is rand() % 6 + 1;
            arr[random]++;

            print diceNum;
        }

        for(int i = 1; i <= 6; i++) {
            print diceNum and diceCnt;
        }
    ```