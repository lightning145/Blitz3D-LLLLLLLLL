txt$ = GetDomainTXT("version.scpcbgame.cn") ; get txt answer
Print ParseDomainTXT(txt, "version") ; parse and get value of "version"
Print ParseDomainTXT(txt, "date") ; parse and get value of "date"
WaitKey
End