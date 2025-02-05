; Download File Example

DownloadFile("https://scpcbgame.cn/changelog.txt", "changelog.txt") ; download it and save as "changelog.txt", suggest encoding is UTF-8
Local ChangeLogFile = OpenFile("changelog.txt")
While Not Eof(ChangeLogFile)
	l$ = ReadLine(ChangeLogFile)
	Print l ; scan and print line by line
	If l="" Then Exit ; if line is empty, then exit loop
Wend
CloseFile(ChangeLogFile)
DeleteFile("changelog.txt") ; ... and delete it

WaitKey