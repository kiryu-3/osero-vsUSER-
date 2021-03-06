# C言語　第2回　
第2回では、変数について学び、それを利用して前回登場したprintf関数や、新しく登場するscanf関数について学びます。
     
  - [変数とは](#変数とは)  
  - [データ型とは](#データ型とは)
  - [printf関数とは](#printf関数とは)
  - [scanf関数とは](#scanf関数とは)
  - [電卓プログラム](#電卓プログラム)
  
  
## 変数とは 
**変数**とは、データを格納するためにコンピュータ内部に準備する箱のようなものです。  
プログラムが扱う数値や文字などの情報を、この箱に納めたり取り出したりしながら処理を進めていきます。

[コード例①](pc_code_2_01.md)

上のプログラムは、変数numberに18を入れ、それを取り出して画面に表示しています。  
このように、変数に値を入れることを**代入**、取り出すことを**取得**といいます。  
どちらの操作も変数を宣言した後にしかできません。


変数を宣言するときは、次の2つを必ず指定する。　　
#### ・変数名（データを格納する箱の名前）
![image](https://user-images.githubusercontent.com/84606676/177672152-8da9f7e8-7ce1-4242-bf3e-f683e6b58169.png)

#### ・型（変数の種類や大きさ）
![image](https://user-images.githubusercontent.com/84606676/177672287-1cc305dd-51a3-4ab1-bb6a-e9c0093300b7.png)

変数の名前を付けるときは、**一度使用した変数名を使わない**ことを注意して、  
具体的で内容が分かりやすいように意識する。

変数に値が入っていない状態では、正しく処理を行えない可能性があります。  
そのため、変数を宣言したらすぐに何らかの値を代入することが大事です。  
このように、変数宣言と値の代入を同時に行うことを**変数の初期化**といいます。  

また、変数には、任意の値を何度でも代入することができる。

## データ型とは

プログラムで扱うことのできるデータの種類を、**データ型**（または単に**型**）といいます。  
C言語には多くの型が用意されているが、今は下の3つを覚えておきましょう。  

|変換指定子|対応する型|説明|
|:---:| :---: | :---: |
|%c|char|半角1文字|
|%d|int|整数|
|%f|float|実数|

 整数値と実数値を相互に変換するには、**型変換**を行う必要があります。  
 
 ![image](https://user-images.githubusercontent.com/84606676/177674504-51d19f5b-5cb9-4fdd-996d-9eeca31030e0.png)

※変数kekkaはint型の整数とする  
`kekka = 18 / 5 →　3が変数に代入される `  
`kekka = (float)18/(float)5 → 3.6が変数に代入される  `    
実数値として18と5を扱うために型変換（型変換を行わないと、結果は3になる）

## printf関数とは
変数内に入っているデータを**printf関数**で出力する形は以下の通りです。

![image](https://user-images.githubusercontent.com/84606676/177676300-5229e5c2-1664-43d8-b0c9-1a7df4c33cd4.png)
![image](https://user-images.githubusercontent.com/84606676/177676320-13cf8ebc-9e10-4942-b6c6-055b6ba368ec.png)

[コード例②](pc_code_2_02.md)

上のコードを実行すると、`年齢は18歳`と出力されるはずです。  

## scanf関数とは
  変数には、キーボードから入力した文字や数字を代入することができます。  
  そのような入力を行える関数が**scanf関数**です。  
  
![image](https://user-images.githubusercontent.com/84606676/177677669-d2489820-55df-47ab-9440-b51a80f84891.png)  

[コード例③](pc_code_2_03.md)  

上のコードを実行すると、  
`あなたは何歳？`  
`●（ユーザーが入力）`  
`年齢は●歳`  
と出力されるはずです。

## 電卓プログラム
これまでの内容を踏まえて、以下の条件を満たすプログラムを作ってみましょう。  

・整数を2回入力すると、四則演算の結果が4行で表示される。  
・変数は3つ使用する。（1つ目の整数を入れる変数、2つ目の整数を入れる変数、結果を入れる変数）  
・商は実数値で表示する。  

[電卓プログラム例](pc_code_2_04.md)
