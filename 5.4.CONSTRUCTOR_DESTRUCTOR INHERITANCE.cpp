#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class ELECTRONIC{
	protected:
		float CongSuat;
		float DienAp;
	public:
		ELECTRONIC(float a,float b);
};
class MAYGIAT : public ELECTRONIC{
	private:
		float DungTichM;
		string Loai;
	public:
		MAYGIAT(float a,float b,float c,string d);
		void XUAT();
};
class TULANH : public ELECTRONIC{
	private:
		float DungTichL;
		float SoNgan;
	public:
		TULANH(float a,float b,float c,int d);
		void XUAT();
};
void MAYGIAT :: XUAT(){
	cout<<"Cong Suat: "<<CongSuat<<endl;
	cout<<"Dien Ap: "<<DienAp<<endl;
	cout<<"Dung Tich(KG)"<<DungTichM<<endl;
	cout<<"Loai: "<<Loai<<endl;
}
void TULANH :: XUAT(){
	cout<<"Cong Suat: "<<CongSuat<<endl;
	cout<<"Dien Ap: "<<DienAp<<endl;
	cout<<"Dung Tich(LIT): "<<DungTichL<<endl;
	cout<<"So Ngan: "<<SoNgan<<endl;
}
ELECTRONIC::ELECTRONIC(float a,float b){
	CongSuat = a;
	DienAp = b;
}
MAYGIAT::MAYGIAT(float a,float b,float c,string d):ELECTRONIC(a,b){
	DungTichM = c;
    Loai = d;
}
TULANH::TULANH(float a,float b,float c,int d):ELECTRONIC(a,b){
	DungTichL = c;
    SoNgan = d;
}
int main()
{
	 MAYGIAT a(200, 220, 8, "CUA TRUOC");
	 TULANH b(150, 220, 150, 4);
	 cout<<"Thog tin may giat:"<<endl;
	 a.XUAT();
	 cout<<"Thong tin tu lanh:"<<endl;
	 b.XUAT();
 return 0;

	return 0;
}
