# PlatformIO ESP32-S3-N16R8 初始配置
> 用于Arduino框架
## 这是啥?
这是一份用于在platformIO上开发ESP32-S3 N16R8的初始配置, 适用于Arduino框架

因为PlatformIO没有提供ESP32-S3 N16R8的预设, 于是本人在网上翻阅了一些教程, 最终弄出了这份可用配置

可以正常初始化8MB PSRAM和16MB Flash

但是Flash工作在DIO(双线)模式下, 而不是QIO(四线)模式, 尽管我已经在配置文件中指定了QIO, 但platformIO在编译时貌似会把这个配置覆盖为DIO

*如果你坚持要使用QIO, ESP-IDF或许会是更好的选择*


# 怎么用?
首先, 把这个项目克隆到本地
```bash
git clone https://github.com/AquaSkyballad/pio-esp32s3n16r8.git
```
然后把项目文件夹下面的所有东西拷贝到你的项目目录(空的)里就行了