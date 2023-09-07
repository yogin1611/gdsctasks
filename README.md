Explanation for Candle:-
1)int highest = -1, cnt = 0;
Declare two integer variables highest and cnt. highest is initialized to -1, and cnt is initialized to 0. These variables will be used to keep track of the highest integer and its count.
2)for (int i = 0; i < n; i++)
Start a for loop that iterates n times, where n is the number of integers to be input.
3)int h;
Declare an integer variable h to store each input integer.
4)scanf("%d",&h);
Inside the loop, read an integer value from standard input and store it in the variable h.
5)if (h > highest)
Check if the current value h is greater than the current highest value stored in highest. If it is, update highest to h and reset the count cnt to 1, as you have found a new highest value.
6)else if (h == highest)
If the current value h is equal to the highest value stored in highest, increment the count cnt. This means you've encountered another occurrence of the highest value.
After the loop finishes, you've counted how many times the highest value occurred in the input sequence.
7)printf("%d\n", cnt);
Print the count of the highest value to standard output (usually the console).



Explanation for array DS:-
1)int N;
Declare an integer variable N to store the number of integers to be input.
2)cin >> N;
Read an integer value from standard input (usually the keyboard) and store it in the variable N. This input represents the number of integers that will follow.
3)vector<int> arr(N);
Declare a vector arr of integers with a size of N. This vector will be used to store the sequence of integers.
4)for (int i = 0; i < N; i++)
Start a for loop that iterates N times, where N is the number of integers to be input.
5)cin >> arr[i];
Inside the loop, read an integer value from standard input and store it in the vector arr at the i-th position. This populates the vector with the input sequence of integers.
6)reverse(arr.begin(), arr.end());
After reading the entire sequence, use the reverse function from the C++ standard library to reverse the order of elements in the arr vector. This effectively reverses the input sequence.
7)for (int i = 0; i < N; i++)
Start another for loop to iterate through the reversed vector.
8)cout << arr[i] << " ";
Inside the loop, print each element of the reversed vector, followed by a space, to standard output (usually the console).
After the loop finishes, you've printed the reversed sequence of integers to the console.

