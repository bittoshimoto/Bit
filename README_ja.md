<p align="center">
  <strong>言語を選択：</strong>
  <a href="README.md">EN</a> |
  <a href="README_zh-CN.md">CN</a> |
  <a href="README_pt.md">PT</a> |
  <a href="README_fa.md">FA</a> |
  <a href="README_vi.md">VI</a> |
  <a href="README_fr.md">FR</a> |
  <a href="README_ja.md">JA</a> |
  <a href="README_de.md">DE</a>
</p>

<h1 align="center">
  <img src="https://b1tcore.org/bit-logo.png" alt="Bit" width="300" />
  <br /><br />
  Bit Core [B1T]
</h1>

<p align="center">
  <a href="https://b1tcore.org"><strong>🌐 ウェブサイト</strong></a> |
  <a href="INSTALL.md"><strong>🚀 インストール</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 はじめに</strong></a>
</p>

---

## 🔍 Bitについて

Bitは、透明性、希少性、個人のエンパワーメントを基盤とした、コミュニティ主導の分散型暗号通貨です。\*\*「FollowTheBit」\*\*のモットーのもと再始動し、確立されたScrypt AuxPoWコンセンサス機構を採用—個別マイニングの安全性を維持しつつ、マージマイニングにも対応します。

ブロックチェーン以上の存在であるBitは、白いうさぎを追うように、既存システムの外へ踏み出し、人工的な限界を打ち破り、流行ではなく真実を選ぶ象徴です。Bitは旧来の世界を再現するのではなく、ブロックごとにルールを書き換えます。

---

## 🎯 私たちのビジョン

* **保有者による分散化**
  真の分散化はマイニングパワーではなく、幅広い所有権から生まれます。
* **手数料ベースのセキュリティ**
  ブロック報酬が減少しても、1分のブロックタイムと適度な供給量により、取引手数料がネットワークを保護するのに十分な水準を維持します。
* **内在する希少性**
  約210万B1Tのハードキャップが長期的な価値保存を保証します。

---

## ⚙️ 技術仕様

| パラメーター       | 値                       |
| ------------ | ----------------------- |
| **コイン総供給量**  | 約2.1M B1T（ハードキャップ）      |
| **初期ブロック報酬** | 5 B1T                   |
| **半減期間隔**    | 210,000ブロックごと           |
| **ブロック時間**   | 1分                      |
| **コンセンサス**   | Scrypt AuxPoW（マージマイニング） |

---

## 💻 JSON-RPC API

Bit CoreのJSON-RPC APIは自己文書化されています。以下を実行してください：

```
bit-cli help
bit-cli help <command>
```

参照用には[Bitcoin Core RPCドキュメント](https://developer.bitcoin.org/reference/rpc/)をご覧ください。インターフェースは類似しています。

---

## ポート設定

ノードは2つの異なるポートを公開できます：一つは他のノードと通信する**P2Pネットワーク**用、もう一つはRPC APIアクセス用です。デフォルトのポート設定は以下の通りです。

| 機能      | mainnet | testnet | regtest |
| :------ | ------: | ------: | ------: |
| **P2P** |   33317 |   44417 |   22217 |
| **RPC** |   33318 |   44418 |   22218 |

`-port`および`-rpcport`パラメーターで設定できます。

---

## 🌐 コミュニティ 🐰

議論、ミームの共有、質問、プロジェクトの紹介などのためにコミュニティに参加してください：

* **Reddit：** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)
* **Discord：** [https://discord.gg/UevXymWWjD](https://discord.gg/UevXymWWjD)
* **Telegram：** [https://t.me/Bittoshimoto](https://t.me/Bittoshimoto)
* **Twitter/X：** [https://x.com/bittoshimo](https://x.com/bittoshimo)

---

## ⚖️ ライセンス

Bit CoreはMITライセンスの下で公開されています。
[COPYING](COPYING)を参照するか、[opensource.org/licenses/MIT](https://opensource.org/licenses/MIT)をご覧ください。

<br />
<p align="center">
  &copy; Bit開発者
</p>
