#ifndef HPP_ISK_EXCOGITATOR
#define HPP_ISK_EXCOGITATOR
namespace isk{
#include <string>
#include <fstream>
using namespace std;
static string EXCOGITATOR_KEY("Vfs*HUdvvf,MW2:lwm0EZvzZ,pP|/T41|<itBI+dS-diKs@<4q1{sFYB?Xccu_iz2]MD>]9Obo([GyII`.PE6].9Nh<az_)eZB{5M`*pv:RHWDrE|{j7tdqmIfaMSFb1J{y7@B][iBbQ,LtqB08Sdv^NvSR[.A^WG?+b2akt|:G_Mw{/e._8N>k,RC`vc[P/z-M5z;<1q*0Nz`kPjA@^9h|Y<Hr`.K4mu{bm5`*ON@t?w7oN~KOyUq6*m/t(L}u/ed8bTFlpkC<L5*n86Q.N2rLmCR~f^xNThe<6,p[niGda*p(exE>CIp]:Qo8yo--y]AYsh}0JM7VwHBB)vZHHjhklGV1P(>n:~KPEh6v]Q=X:m45Jpi*+pWY{PNycQQlb7-fL@z?Tg>.:9j<W8s>Biie:Y.cA{Z6tpR8>iHu8/WGne+e}:Gw|o(xS}2yV~Q~[::83rRU~}HP::((_WDeR2zZTw=ALPjmDe*P4D,IiOM?5:55nqWamh-oaWyJo");
bool checkExcogitator(){ifstream kf("excogitator.isk",fstream::in);if(!(kf.good()&&kf.is_open())){cout<<"Invalid key file"<<endl;kf.close();return 0;}string ik;ik.reserve(512);char ch = kf.get();while(ch!=EOF){ik.push_back(ch);ch=kf.get();}if(ik!=EXCOGITATOR_KEY){cout<<"Invalid key file"<<endl;kf.close();return 0;}else{return 1;}}
}
#endif
