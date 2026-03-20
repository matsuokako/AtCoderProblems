#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, M; // N:料理の数, M:コショウの種類の数
    cin >> N >> M;

    // コショウの在庫数
    vector<int> C(M+1); // なぜ、m+1なのか？ ... C[0]も定義されるがC[0]は無視していい。
    for (int i = 1; i <= M; i++) cin >> C[i]; // C[i]: 種類iのコショウの使用できる合計値

    // コショウの各種類で, 使いたい量を集計する. 
    vector<int> S(M+1, 0); // カッコ内について詳しく知りたい。
    // ↑サイズがM+1の配列を作って、全部０で初期化する。書かなくても実は定義されるが明示的ではないため、書いておく。
    for(int i = 0; i < N; i++) {
        int A, B; // A: 使うコショウの種類, B: その料理iで使える最大値
        cin >> A >> B;
        S[A] += B; // S[A]にどんどん足していく。
    }

    // 答えを計算していく
    int res = 0; 
    for (int i = 1; i <= M; i++) res += min(C[i], S[i]);

    cout << res << endl;

    return 0;
}