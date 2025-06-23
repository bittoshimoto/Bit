<p align="center">
  <strong>Chọn ngôn ngữ:</strong>
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
  <a href="https://b1tcore.org"><strong>🌐 Trang chủ</strong></a> |
  <a href="INSTALL.md"><strong>🚀 Cài đặt</strong></a> |
  <a href="doc/getting-started.md"><strong>📖 Bắt đầu</strong></a>
</p>

---

## 🔍 Về Bit

Bit là một đồng tiền mã hóa phi tập trung, lấy cộng đồng làm trọng tâm, xây dựng trên nền tảng minh bạch, khan hiếm và trao quyền cá nhân. Ra mắt lại dưới khẩu hiệu **"FollowTheBit,"** nó sử dụng cơ chế đồng thuận Scrypt AuxPoW đã được chứng minh—cho phép khai thác riêng an toàn trong khi vẫn tương thích với đào ghép (merge-mining).

Hơn cả một blockchain, Bit là biểu tượng: theo con thỏ trắng là bước ra khỏi các hệ thống thừa kế, phá vỡ giới hạn nhân tạo và chọn sự thật hơn là xu hướng. Bit không đến để sao chép thế giới cũ—nó đến để viết lại quy tắc, từng khối một.

---

## 🎯 Tầm nhìn của chúng tôi

* **Phi tập trung bởi người nắm giữ**
  Phi tập trung thực sự đến từ sự sở hữu rộng rãi, không chỉ sức mạnh khai thác.
* **Bảo mật dựa trên phí giao dịch**
  Khi phần thưởng khối giảm, khối 1 phút của Bit và nguồn cung hạn chế giữ cho phí giao dịch đủ để bảo vệ mạng lưới.
* **Khan hiếm tích hợp sẵn**
  Hạn mức cứng \~2,1 triệu B1T đảm bảo giá trị được giữ vững lâu dài.

---

## ⚙️ Thông số kỹ thuật

| Tham số                      | Giá trị                      |
| ---------------------------- | ---------------------------- |
| **Tổng cung**                | \~2,1 triệu B1T (tối đa)     |
| **Phần thưởng khối ban đầu** | 5 B1T                        |
| **Khoảng halving**           | mỗi 210.000 khối             |
| **Thời gian khối**           | 1 phút                       |
| **Cơ chế đồng thuận**        | Scrypt AuxPoW (merge-mining) |

---

## 💻 API JSON-RPC

API JSON-RPC của Bit Core tự tài liệu hóa. Chạy:

```
bit-cli help
bit-cli help <command>
```

Để xem tài liệu trực quan, tham khảo [tài liệu RPC của Bitcoin Core](https://developer.bitcoin.org/reference/rpc/)—giao diện tương tự.

---

## Cổng kết nối

Một nút có thể mở hai cổng: một cổng cho **mạng ngang hàng P2P** để giao tiếp với các nút khác, và một cổng cho truy cập API RPC. Mặc định, các cổng như sau:

| Chức năng | mainnet | testnet | regtest |
| :-------- | ------: | ------: | ------: |
| **P2P**   |   33317 |   44417 |   22217 |
| **RPC**   |   33318 |   44418 |   22218 |

Để cấu hình, sử dụng các tham số `-port` và `-rpcport`.

---

## 🌐 Cộng đồng 🐰

Tham gia cộng đồng của chúng tôi để thảo luận, chia sẻ meme, đặt câu hỏi hoặc giới thiệu dự án:

* **Reddit:** [r/FollowTheBit](https://www.reddit.com/r/FollowTheBit/)
* **Discord:** [https://discord.gg/UevXymWWjD](https://discord.gg/UevXymWWjD)
* **Telegram:** [https://t.me/Bittoshimoto](https://t.me/Bittoshimoto)
* **Twitter/X:** [https://x.com/bittoshimo](https://x.com/bittoshimo)

---

## ⚖️ Giấy phép

Bit Core được phát hành theo điều khoản của Giấy phép MIT.
Xem [COPYING](COPYING) hoặc truy cập [opensource.org/licenses/MIT](https://opensource.org/licenses/MIT).

<br />
<p align="center">
  &copy; Các nhà phát triển Bit
</p>
