# Graphics API Replacer

**作者**: TheRedDaemon, gynt

[ucp_graphicsApiReplacer](https://github.com/TheRedDaemon/ucp_graphicsApiReplacer)

此模块将旧的 DirectDraw 显示系统替换为使用 DirectX 或 OpenGL 的较新系统。它会修改并接管窗口创建、少量被使用的 DirectDraw 调用及部分输入函数。其核心是模拟 DirectDraw，为 Crusader 的软件渲染帧提供内存，再将结果作为纹理通过 DirectX 11 或 OpenGL 显示。鼠标输入也会调整，以适应新的显示方式。

目前仅保证支持西方版本的 Crusader 1.41 和 Crusader Extreme 1.41.1-E。其他东方版本的 1.41 可能也能运行。HD 之前的版本（1.3？）肯定**无法运行**。

### 选项

各选项在配置页中有详细说明。以下规则普遍适用：

- 游戏内分辨率只决定渲染分辨率。窗口分辨率需要通过此模块的选项设置。
- 保留游戏的画面比例。窗口空余区域保持黑色，并会出现在录屏中，因为它们仍属于显示画面。
- 按住三个主要鼠标按钮中的任意一个时，光标会被限制在窗口的游戏区域内。
- 更改选项需要重启游戏。

### 反馈

如遇到与此模块有关的问题或有建议，欢迎在 GitHub 提交 issue。
