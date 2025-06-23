<p align="center">
  <strong>Select language:</strong>
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
  <a href="https://b1tcore.org"><strong>🌐 Website</strong></a> |
  <a href="INSTALL.md"><strong>🚀 Installation</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 Getting Started</strong></a>
</p>

---

## 🔍 About Bit

Bit is a decentralized, community-first cryptocurrency built on transparency, scarcity and individual empowerment. Relaunched under the motto **“FollowTheBit,”** it uses the proven Scrypt AuxPoW consensus mechanism—enabling secure solo-mining while remaining merge-mining compatible.

More than a blockchain, Bit is a symbol: to follow the white rabbit is to step outside inherited systems, break free of artificial limits, and choose truth over trend. Bit isn’t here to replicate the old world—it’s here to rewrite the rules, one block at a time.

---

## 🎯 Our Vision

- **Decentralization by Holders**  
  True decentralization comes from widespread ownership, not just mining power.  
- **Fee-Based Security**  
  As block rewards wane, Bit’s 1-minute blocks and modest supply keep transaction fees sufficient to secure the network.  
- **Built-in Scarcity**  
  A hard cap of ~2.1 million B1T guarantees long-term value preservation.  

---

## ⚙️ Technical Specs

| Parameter                | Value                             |
|--------------------------|-----------------------------------|
| **Coin Supply**          | ~2.1 M B1T (hard cap)             |
| **Initial Block Reward** | 5 B1T                             |
| **Halving Interval**     | every 210 000 blocks              |
| **Block Time**           | 1 minute                          |
| **Consensus**            | Scrypt AuxPoW (merge-mining)      |

---

## 💻 JSON-RPC API

Bit Core’s JSON-RPC API is self-documenting. Run:  
    bit-cli help  
    bit-cli help <command>  

For a browsable reference, see the [Bitcoin Core RPC docs](https://developer.bitcoin.org/reference/rpc/)—the interfaces are similar.

---

## Ports

A node can expose 2 different ports: one port for the **Peer to Peer Network** (P2P) to communicate with other nodes, and a second port for access to the RPC API. By default, the ports are configured as follows:

| Function | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| **P2P**  | 33317   | 44417   | 22217   |
| **RPC**  | 33318   | 44418   | 22218   |

To configure them use the `-port` and `-rpcport` parameters.

## 🌐 Communities 🐰

Join our community to discuss, share memes, ask questions, or show off your projects:

- **Reddit:** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)  
- **Discord:** https://discord.gg/UevXymWWjD  
- **Telegram:** https://t.me/Bittoshimoto  
- **Twitter/X:** https://x.com/bittoshimo  

---

## ⚖️ License

Bit Core is released under the terms of the MIT License.  
See [COPYING](COPYING) or visit [opensource.org/licenses/MIT](https://opensource.org/licenses/MIT).

<br />
<p align="center">
  &copy; Bit developers
</p>
