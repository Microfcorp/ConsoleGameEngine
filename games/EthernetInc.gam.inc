function;Init{
	isfunction;
	newmodule;et;C:\\Users\\Лехап\\Documents\\Visual Studio 2015\\Projects\\game\\game\\bin\\Debug\\EthernetModule.dll
	module;et;Start:p=t
	mess;$EthernetRequest
	string;ConnectParams:localhost
	string;DownloadFiles:localhost
}
function;ConnectServer{
	isfunction;
	module;et;ConnectWeb:url=$ConnectParams
	string;ServerRequstConnect:$EthernetRequest
	replace;$ServerRequstConnect;|;^;ServerRequstConnect
}
function;DownloadFile{
	isfunction;
	cashe;$ConnectParams;$DownloadFiles
}