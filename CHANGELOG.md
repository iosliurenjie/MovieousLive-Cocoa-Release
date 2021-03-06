*其他语言版本: [English](CHANGELOG.en-us.md), [简体中文](CHANGELOG.md).*

# v2.0.5(2019-7-16)
## 功能
- 将 `MovieousBase` 升级到 v1.1.1。
- 支持切换摄像头时模糊化处理。

# v2.0.4(2019-6-9)
## 修复
- 修复退后台回到前台报错 `-12903` 的问题。
- 支持后台推音频。

# v2.0.3(2019-5-7)
## 修复
- 修复 `-startCapturingWithCompletion` 调用时会短暂卡住主线程的问题。

# v2.0.2(2019-5-5)
## 其他
- 修复 `preferredVideoOrientation` 在切换摄像头之后不生效的问题。

# v2.0.1(2019-4-29)
## 功能
- 添加 `flashMode` 调整闪光灯模式。
## 其他
- 更新头文件文档。
- 将 `MovieousBase` 更新到 v1.0.6。

# v2.0.0(2019-4-23)
## 功能
- 支持更多的摄像头操作（自动对焦，曝光等）。
- 支持内置美颜，水印。
## 优化
- 使用全新内核，内存和 CPU 占用量降低 50% 以上。
- 提升稳定性。
## 其他
- v2.x.x 接口与 v1.x.x 接口不兼容，升级该版本需要对应升级相应接口调用部分。

# v1.0.2(2018-12-8)
## 功能
- 添加内部采集的暂停和恢复的接口。

# v1.0.1(2018-12-6)
## 修复
- 修复外部视频处理无法在预览视图生效的问题。

# v1.0.0(2018-11-28)
- 发布初版。