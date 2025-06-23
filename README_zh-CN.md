<p align="center">
  <strong>选择语言：</strong>
  <a href="README.md">EN</a> |
  <a href="README_zh-CN.md">CN</a> |
  <a href="README_pt.md">PT</a> |
  <a href="README_fa.md">FA</a> |
  <a href="README_vi.md">VI</a> |
  <a href="README_fr.md">FR</a> |
  <a href="README_ja.md">JA</a> |
  <a href="README_de.md">DE</a> |
  <a href="README_es.md">ES</a>
</p>

<h1 align="center">
  <img src="https://b1tcore.org/bit-logo.png" alt="Bit" width="300" />
  <br /><br />
  Bit Core [B1T]
</h1>

<p align="center">
  <a href="https://b1tcore.org"><strong>🌐 网站</strong></a> |
  <a href="INSTALL.md"><strong>🚀 安装</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 入门指南</strong></a>
</p>

---

## 🔍 关于 Bit

Bit 是一个去中心化、以社区为先的加密货币，建立在透明、稀缺和个人赋权的理念之上。它在“FollowTheBit”口号下重新启动，采用经过验证的 Scrypt AuxPoW 共识机制——既支持安全的单独挖矿，也兼容合并挖矿。

Bit 不仅仅是一条区块链，更是一种象征：追随白兔，就是跳出既有系统，突破人为限制，选择真理而非潮流。Bit 不打算复制旧世界——它要重新书写规则，一块区块一个区块地前进。

---

## 🎯 我们的愿景

* **持有者去中心化**
  真正的去中心化来源于广泛的持有，而不仅仅是挖矿算力。
* **基于手续费的安全性**
  随着区块奖励的减少，Bit 的 1 分钟出块时间和适度的总量能够使交易手续费足以保障网络安全。
* **内置稀缺性**
  约 210 万枚 B1T 的硬顶保证了长期价值的保存。

---

## ⚙️ 技术规格

| 参数         | 数值                  |
| ---------- | ------------------- |
| **总发行量**   | 约 2.1M B1T（硬顶）      |
| **初始区块奖励** | 5 B1T               |
| **减半间隔**   | 每 210,000 个区块       |
| **出块时间**   | 1 分钟                |
| **共识机制**   | Scrypt AuxPoW（合并挖矿） |

---

## 💻 JSON-RPC API

Bit Core 的 JSON-RPC API 自带文档。运行：

```
bit-cli help
bit-cli help <command>
```

更多可浏览参考，请参阅[Bitcoin Core RPC 文档](https://developer.bitcoin.org/reference/rpc/)，两者接口类似。

---

## 端口配置

节点可以开放两个端口：一个用于 **P2P 网络** 与其他节点通信，另一个用于访问 RPC API。默认配置如下：

| 功能      | mainnet | testnet | regtest |
| :------ | ------: | ------: | ------: |
| **P2P** |   33317 |   44417 |   22217 |
| **RPC** |   33318 |   44418 |   22218 |

可通过 `-port` 和 `-rpcport` 参数进行自定义。

---

## 🌐 社区 🐰

加入我们的社区，讨论、分享表情包、提问或展示项目：

* **Reddit:** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)
* **Discord:** [https://discord.gg/UevXymWWjD](https://discord.gg/UevXymWWjD)
* **Telegram:** [https://t.me/Bittoshimoto](https://t.me/Bittoshimoto)
* **Twitter/X:** [https://x.com/bittoshimo](https://x.com/bittoshimo)

---

## ⚖️ 许可证

Bit Core 根据 MIT 许可证条款发布。
查看 [COPYING](COPYING) 或访问 [opensource.org/licenses/MIT](https://opensource.org/licenses/MIT)。

<br />
<p align="center">
  &copy; Bit 开发者
</p>
