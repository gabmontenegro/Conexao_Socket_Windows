/* API para conexao socket no Windows
** Autor: Gabriel Montenegro Villacrez
** Instituto Transire
** v.1.0, ultima atualizacao 10/01/2018 */


#ifndef conexaoWin_h__
#define conexaoWin_h__

#ifdef __cplusplus
extern "C"{
#endif

int windowsConnect(int port, char *serverIP, char *sendbuf, char *recvbuf)

#ifdef __cplusplus
}
#endif