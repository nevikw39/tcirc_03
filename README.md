# 一中電研 37 屆下學期 C++ 班 社課 Ⅲ
# https://github.com/nevikw39/tcirc_03

## 快速連結

> **[上課簡報](https://www.icloud.com/keynote/0FTWiX1kLnyxpK2Q4VdlOxnsQ#tcirc_03)**
> [社團ＯＪ](https://judge.tcirc.tw)
> [社團網站](https://tcirc.tw)
> [Telegram 討論區](https://t.me/joinchat/KUNytVBKySskb35M4TdOig)

> 特別感謝「*[星城數位科技](http://xincastle.com/)*」

由於疫情關係，電腦教室鍵盤暫停使用，請同學改用螢幕小鍵盤或 Remote Mouse

### 電腦端
1. [下載](https://www.remotemouse.net/downloads/RemoteMouse.exe)
2. 安裝（管理員密碼：*sova*）
3. 查看 IP`(210.60.35.*)`

### 手機端
1. 安裝
    - [Android](https://play.google.com/store/apps/details?id=com.hungrybolo.remotemouseandroid)
    - [iOS](https://itunes.apple.com/app/id385894596?mt=8)
2. 輸入 IP`(210.60.35.*)`

請注意，「Remote Mouse」是中囯軟體喔．

## 回憶
- vector: 動態陣列，可高效地在尾端修改
- deque
- list: 雙向鏈結串列，可高效地任意修改

**[b031 - Broken Keyboard cont.](https://judge.tcirc.tw/ShowProblem?problemid=b031)**，這是上次社課最後面提到的例題的加強版，值得一試。

## 關聯式容器的分類
\      |      二分搜尋樹     | 雜湊表 (C++11)
:-----:|-------------------|---
單一鍵值 | **set**, ***map** | unordered_set, unordered_map
多重鍵值 | multiset, multimap| unordered_multiset, unordered_multimap

## set
### 數學中的集合 (set)
- 將具有相同性質的物件聚集在一起的整體
- 無序性：集合的元素可不考慮其排列的次序
- 互異性：集合中的元素不可重複出現
### C++ 中的集合 (set)
- 無序性
    * 既然集合中元素的各種排列同義，則我們可以定義出一種唯一表示法
    * C++ 中預設將 *set* 由小到大排好
- 互異性
    * C++ *set* 中的元素不會重複出現
### set 的特性
- 是一顆自平衡的紅黑樹 (RB-Tree)
- 可以對數時間快速地插入、移除、搜尋

[b034: Arvin 拉麵店](https://judge.tcirc.tw/ShowProblem?problemid=b034)，以 *multiset* 實作 *min-max heap*。

## map
這類資料結構有許多不同的別名，像是 *map*, *dictionary*, *associative array*，其中，由最後一個稱呼，我們可以推測，它是一個行為模仿陣列下標操作的容器。

更精準的說，*map* 是個對應關係。陣列或 *vector* 都以非負整數作為索引下標，而 *map* 是可以自訂下標的容器。

因此， *map* 的元素由兩個部分組成，索引的下標稱之為 **key**，所對應的資料就是 **value**。在 C++ 中兩者可以綁在一起變成一個 *pair*，我們以 *.first* 存取 **key**，*.second* 存取 **value**。