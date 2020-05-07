# 一中電研 37 屆下學期 C++ 班 社課 Ⅲ
# https://github.com/nevikw39/tcirc_03

## 快速連結

> **[上課簡報](https://www.icloud.com/keynote/0FTWiX1kLnyxpK2Q4VdlOxnsQ#tcirc_03)**
> [社團ＯＪ](https://judge.tcirc.tw)
> [社團網站](https://tcirc.tw)
> [Telegram 討論區](https://t.me/joinchat/KUNytVBKySskb35M4TdOig)
> [Python 班講義](hackmd.io/@RucKuo/Circ-Python)

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
[上週講義](https://github.com/nevikw39/tcirc_02)
- `vector`: 動態陣列，可高效地在尾端修改
- `deque`
- `list`: 雙向鏈結串列，可高效地任意修改

**[b031 - Broken Keyboard cont.](https://judge.tcirc.tw/ShowProblem?problemid=b031)**，這是上次社課最後面提到的例題的加強版，值得一試。

## 關聯式容器的分類
\      |      二分搜尋樹     | 雜湊表 (C++11↑)
:-----:|-------------------|---
單一鍵值 | **set**, **map** | unordered_set, unordered_map
多重鍵值 | multiset, multimap| unordered_multiset, unordered_multimap
單一鍵值 | **set**, **map** | `unordered_set, unordered_map`
多重鍵值 | `multiset, multimap`| `unordered_multiset, unordered_multimap`

## set
### 數學中的集合 (set)
- 將具有相同性質的物件聚集在一起的整體
- 無序性：集合的元素可不考慮其排列的次序
- 互異性：集合中的元素不可重複出現
### C++ 中的集合 (set)
- 無序性
    * 既然集合中元素的各種排列等價，則我們可以定義出一種唯一表示法
    * C++ 中預設將 *set* 由小到大排好
- 互異性
    * C++ *set* 中的元素不會重複出現
### set 的特性
- 是一顆自平衡的紅黑樹 (`RB-Tree`)
- 可以對數時間快速地插入、移除、搜尋

### set 的運算
- `union`
- `intersection`
- `difference`
- `symmetric difference`
- `includes`

以上算法其實只要使用前容器有序即可。

**[b034: Arvin 拉麵店](https://judge.tcirc.tw/ShowProblem?problemid=b034)**，以 *multiset* 實作 *min-max heap*。

### 類題演練
TCIRC Judge:
- [b036: 物種豐富度](https://judge.tcirc.tw/ShowProblem?problemid=b036)
- [b033: 晚餐ㄘ什麼？？](https://judge.tcirc.tw/ShowProblem?problemid=b033)
- [c006: Ⅵ. ＡＣ大整理](https://judge.tcirc.tw/ShowProblem?problemid=c006)

GreenJudge:
- [e025: 1.雲端列印](http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=e025)
- [z067: b004類似題(誰還在教室)](http://www.tcgs.tc.edu.tw:1218/ShowProblem?problemid=z067)

ZeroJudge:
- [b533: P21數學問題-集合](https://zerojudge.tw/ShowProblem?problemid=b533)
- [d583: 幼稚的企鵝](https://zerojudge.tw/ShowProblem?problemid=d583)
- [b523: 先別管這個了，你聽過安麗嗎？](https://zerojudge.tw/ShowProblem?problemid=b523)
- [d691: 00496 - Simply Subsets](https://zerojudge.tw/ShowProblem?problemid=d691)
- [a541: 字典](https://zerojudge.tw/ShowProblem?problemid=a541)

## map
這類資料結構有許多不同的別名，像是 *map*, *dictionary*, *associative array*，其中，由最後一個稱呼，我們可以推測，它是一個行為模仿陣列下標操作的容器。

更精準的說，*map* 是個對應關係。陣列或 *vector* 都以非負整數作為索引下標，而 *map* 是可以自訂下標的容器。

因此， *map* 的元素由兩個部分組成，索引的下標稱之為 **key**，所對應的資料就是 **value**。在 C++ 中兩者可以綁在一起變成一個 *pair*，我們以 *.first* 存取 **key**，*.second* 存取 **value**。

[b035: 電皇的資源回收場](https://judge.tcirc.tw/ShowProblem?problemid=b035)

### 類題演練
TCIRC Judge:
- [b037: 破譯密碼](https://judge.tcirc.tw/ShowProblem?problemid=b037)

ZeroJudge:
- [a743: 10420 - List of Conquests](https://zerojudge.tw/ShowProblem?problemid=a743)
- [d492: 10226 - Hardwood species](https://zerojudge.tw/ShowProblem?problemid=d492)
- [b515: 摩斯電碼-商競103](https://zerojudge.tw/ShowProblem?problemid=b515)
- [a135: 12250 - Language Detection](https://zerojudge.tw/ShowProblem?problemid=a135)
- [c012: 10062 - Tell me the frequencies!](https://zerojudge.tw/ShowProblem?problemid=c012)
- [c044: 10008 - What's Cryptanalysis](https://zerojudge.tw/ShowProblem?problemid=c044)

## PBDS 中的關聯式容器
**Policy-based Data Structures** 是 *gcc* 獨有的擴充。mac 上預設的 *clang* 不支援。大部分 OJ、比賽及檢定都支援。

依據 STL 風格寫成，提供很多神奇的資料結構，俗稱**黑魔法**。

如同前述，*set* 其實可以視作 key 為 null 之 *map*，故 **PBDS** 不特別提供集合類容器。

### Tree

標準庫中的 *set*, *map* 雖然內部是紅黑樹結構，然而許多功能被封裝起來，而 **PBDS** 提供的 *tree*，如 *.find_by_order()*, *.order_of_key()* 還有節點的更新等。

### Hash Table
雜湊函數並非完美。當不同的 key 經過 hash 得到相同的值，稱為**碰撞 _(collision)_**。處理碰撞的方式有兩種：

1. collision-chaining 拉表法 (?
    - cc_hash_table
2. probing 探測法
    - gp_hash_table

題外話，已知雜湊函數則我們可以構造特殊測資針對產生大量碰撞。例如 *STL* 預設整數雜湊函數是對 `126271`、`107897` 等質數取模，那如果大量插入這些質數的倍數，就會導致容器效率趨近最差情況。
