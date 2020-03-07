

1硬件连接
```
将继电器模块连接到开发板的“GPIO/CAN/485”排针一端
```

2测试软件使用
```
relay -qws &
```

3
```
然后在超级终端上输入 ps ，找到
xxx root 0:01 ./fluidlauncher -qws
用 kill 将它关掉，点击“RELAY”按钮，就能听到继电器开、闭转换的声音
```