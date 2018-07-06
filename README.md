# MediaApplication

vc 版本ffplay
支持播放 视频文件、rtsp流等。h264、h265解码

1、编译环境搭建
	ffmpeg 版本： 3.4.2：
	开发需要的头文件与lib：	https://ffmpeg.zeranoe.com/builds/win32/dev/ffmpeg-3.4.2-win32-dev.zip
	运行需要的dll：	https://ffmpeg.zeranoe.com/builds/win32/shared/ffmpeg-3.4.2-win32-shared.zip
环境变量：
	FFMPEG_HOME：如 D:\dev\ffmpeg\ffmpeg-3.4.2
	SDL_HOME：   如 D:\dev\SDL2
	
2、vs 打开工程即可编译运行
	用vs2010 打开工程即可编译，
	如已安装vs2008 ，vs2010打开工程，将工程Platform Toolset 设置为 vc90，即可编译出兼容vc2008版本
