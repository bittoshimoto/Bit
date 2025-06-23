<p align="center">
  <strong>Selecionar idioma:</strong>
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
  <a href="https://b1tcore.org"><strong>🌐 Website</strong></a> |
  <a href="INSTALL.md"><strong>🚀 Instalação</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 Primeiro Passos</strong></a>
</p>

---

## 🔍 Sobre o Bit

Bit é uma criptomoeda descentralizada e orientada pela comunidade, baseada em transparência, escassez e empoderamento individual. Relançado sob o lema **“FollowTheBit,”** utiliza o comprovado mecanismo de consenso Scrypt AuxPoW—permitindo mineração solo segura ao mesmo tempo que mantém compatibilidade com merge-mining.

Mais do que uma blockchain, Bit é um símbolo: seguir o coelho branco é sair dos sistemas herdados, romper limites artificiais e escolher a verdade em vez da moda. Bit não está aqui para replicar o mundo antigo—está aqui para reescrever as regras, um bloco por vez.

---

## 🎯 Nossa Visão

* **Descentralização pelos Detentores**
  A verdadeira descentralização vem da propriedade ampla, não apenas do poder de mineração.
* **Segurança Baseada em Taxas**
  À medida que as recompensas de bloco diminuem, os blocos de 1 minuto do Bit e sua oferta moderada mantêm as taxas de transação suficientes para proteger a rede.
* **Escassez Embutida**
  Um limite rígido de \~2,1 milhões de B1T garante a preservação de valor a longo prazo.

---

## ⚙️ Especificações Técnicas

| Parâmetro                | Valor                        |
| ------------------------ | ---------------------------- |
| **Oferta de Moedas**     | \~2,1 M B1T (teto rígido)    |
| **Recompensa Inicial**   | 5 B1T                        |
| **Intervalo de Halving** | a cada 210.000 blocos        |
| **Tempo de Bloco**       | 1 minuto                     |
| **Consenso**             | Scrypt AuxPoW (merge-mining) |

---

## 💻 API JSON-RPC

A API JSON-RPC do Bit Core é auto-documentada. Execute:

```
bit-cli help
bit-cli help <comando>
```

Para referência navegável, consulte a [documentação do RPC do Bitcoin Core](https://developer.bitcoin.org/reference/rpc/)—as interfaces são similares.

---

## Portas

Um nó pode expor duas portas: uma para a **Rede P2P** comunicar-se com outros nós, e outra para acesso à API RPC. Por padrão, as portas são:

| Função  | mainnet | testnet | regtest |
| :------ | ------: | ------: | ------: |
| **P2P** |   33317 |   44417 |   22217 |
| **RPC** |   33318 |   44418 |   22218 |

Para configurá-las, use os parâmetros `-port` e `-rpcport`.

---

## 🌐 Comunidades 🐰

Junte-se à nossa comunidade para discutir, compartilhar memes, tirar dúvidas ou mostrar seus projetos:

* **Reddit:** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)
* **Discord:** [https://discord.gg/UevXymWWjD](https://discord.gg/UevXymWWjD)
* **Telegram:** [https://t.me/Bittoshimoto](https://t.me/Bittoshimoto)
* **Twitter/X:** [https://x.com/bittoshimo](https://x.com/bittoshimo)

---

## ⚖️ Licença

O Bit Core é distribuído sob os termos da Licença MIT.
Veja [COPYING](COPYING) ou visite [opensource.org/licenses/MIT](https://opensource.org/licenses/MIT).

<br />
<p align="center">
  &copy; Desenvolvedores do Bit
</p>
