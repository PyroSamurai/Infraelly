#ifndef HPP_ISK_TEST
#define HPP_ISK_TEST
namespace isk{
#include <string>
#include <fstream>
using namespace std;
static string TEST_KEY("Ca3Zy(nhD9(eu01`5hB4Y0jaWwEI<Sq0a-+*cOFLbgD2}Sn><8OuG-J]nM,*`~)T*0(Qh<[2ozaW|}we71e/Z|WL|8D7|kCk6`2MU6659bTP:irq3y|GP;G~RM`I]WVt8;9hbIe^S~lSvE4HpOvrX/qI1lxCpi-BS=?c,kBj(+RtWZF2)1k<@k<YrWaTZw2g(rcjnp;{]t`9/7<]B-[KEPOE{0C?B|{|Q0}Jr37AhtczxemwRdQ/Ksoc2/o**AP0(C}WYwR1X}9)`rAtK4b{[hgJj3;OLT}kq@X.?h_1XhVC8iW>+Y1?hB6^BXGW*6+w}NhU8Tf.l7|JOT(6.c:q1N0b7BI/>m5E,_]Q_Kuyu(l]T0B~UdU5HL~7lMGk.kFt/H_8i*KiN5?`(({[NsVVn9Sc+)?*WB]<65X?*-2X@|e^4Z?O[mi>q5yf5I-G<CrELk5tlb.SHxy@_n7;.4ozV-0;_c;8v@jJON0xQy9T,*F=><i<y:9q)^K");
bool checkTest(){ifstream kf("test.isk",fstream::in);if(!(kf.good()&&kf.is_open())){cout<<"Invalid key file"<<endl;kf.close();return 0;}string ik;ik.reserve(512);char ch = kf.get();while(ch!=EOF){ik.push_back(ch);ch=kf.get();}if(ik!=TEST_KEY){cout<<"Invalid key file"<<endl;kf.close();return 0;}else{return 1;}}
}
#endif
