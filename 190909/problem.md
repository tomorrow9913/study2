## 19.09.09. ����

- [x] N�� ����� cnt�� ��� (file : MultipleOutput)
    * idea (Pseudo Code)
    ```c
        get input, cnt;
        for(i = 1; i <= cnt; i++) {
            print input*i;
        }
    ```

- [x] N�� �־����� �� N�� �ŵ��������� Ȯ��.(file : PowerCheck)
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
- [x] �ֻ����� 10���� �������� ���� ������ ����Ͻÿ�. (file : dice)
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