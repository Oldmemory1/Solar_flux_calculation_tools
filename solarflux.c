#include<stdio.h>
struct item{
	char* name;
	double amount;
}; 
void solar2_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	product[0].amount=product[0].amount+product[1].amount*8;
	intermediate[1].amount=intermediate[1].amount+product[1].amount;
	product[1].amount=0;
}
void solar1_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
    intermediate[0].amount=intermediate[0].amount+3*product[0].amount;
    raw_materials[2].amount=raw_materials[2].amount+5*product[0].amount;
    raw_materials[4].amount=raw_materials[4].amount+product[0].amount;
	product[0].amount=0;
}
void mirror_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	raw_materials[0].amount=raw_materials[0].amount+0.5*intermediate[0].amount;
	raw_materials[1].amount=raw_materials[1].amount+1.5*intermediate[0].amount;
	intermediate[0].amount=0;
}
void redstone_receiving_coil_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	raw_materials[3].amount=raw_materials[3].amount+intermediate[1].amount*2; 
	raw_materials[4].amount=raw_materials[4].amount+intermediate[1].amount; 
	intermediate[1].amount=0;
}
void solarcell1_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	intermediate[0].amount=intermediate[0].amount+intermediate[4].amount;
	raw_materials[5].amount=raw_materials[5].amount+intermediate[4].amount;
	intermediate[4].amount=0;
}
void frame_basic_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	raw_materials[0].amount=raw_materials[0].amount+intermediate[2].amount*4;
	raw_materials[1].amount=raw_materials[1].amount+intermediate[2].amount*4;
	intermediate[5].amount=intermediate[5].amount+intermediate[2].amount;
	intermediate[2].amount=0;
}
void geartin_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	raw_materials[6].amount=raw_materials[6].amount+intermediate[5].amount*4;
	intermediate[5].name=0;
}
void lead_stone_energy_element_frame_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	raw_materials[7].amount=intermediate[3].amount*4+raw_materials[7].amount;
	raw_materials[1].amount=intermediate[3].amount*4+raw_materials[1].amount;
	raw_materials[3].amount=intermediate[3].amount*9+raw_materials[3].amount;
	intermediate[3].amount=0;
}
void solar3_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	product[1].amount=product[1].amount+product[2].amount*4;
	intermediate[4].amount=intermediate[4].amount+product[2].amount*3;
	intermediate[2].amount=intermediate[2].amount+product[2].amount;
	intermediate[3].amount=intermediate[3].amount+product[2].amount;
	product[2].amount=0;
}
void solarcell2_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	intermediate[4].amount=intermediate[4].amount+intermediate[6].amount;
	raw_materials[8].amount=raw_materials[8].amount+16*intermediate[6].amount;
	intermediate[6].amount=0;
}

main(){
	struct item raw_materials[50];
    struct item intermediate[50];
    struct item product[20];
    /*反射镜*/
	intermediate[0].name="mirror";
	intermediate[0].amount=0;
	/*红石接收线圈*/
	intermediate[1].name="redstone_receiving_coil";
	intermediate[1].amount=0; 
	/*机器框架（基础）*/
	intermediate[2].name="frame_basic";
	intermediate[2].amount=0;
	/*铅石能量元件框架*/
	intermediate[3].name="lead_stone_energy_element_frame";
	intermediate[3].amount=0;
	/*光电池I*/
	intermediate[4].name="solarcell1";
	intermediate[4].amount=0;
	/*锡齿轮*/
	intermediate[5].name="geartin";
	intermediate[5].amount=0;
	/*光电池II*/
	intermediate[6].name="solarcell2";
	intermediate[6].amount=0; 
	/*机器框架（硬化）*/
	intermediate[7].name="frame_hardened";
	intermediate[7].amount=0;
	/*琥珀金齿轮*/
	intermediate[8].name="gearelectrum";
	intermediate[8].amount=0;
	
	
	
	/*铁锭*/
	raw_materials[0].name="ingotiron";
    raw_materials[0].amount=0;
	/*玻璃*/
	raw_materials[1].name="glass";
	raw_materials[1].amount=0;
	/*木板*/
	raw_materials[2].name="plankwood";
	raw_materials[2].amount=0;
	/*红石*/
	raw_materials[3].name="redstone";
	raw_materials[3].amount=0;
	/*金锭*/
	raw_materials[4].name="ingotgold";
	raw_materials[4].amount=0;	
	/*青金石*/
	raw_materials[5].name="lapis";
	raw_materials[5].amount=0;
	/*锡锭*/
	raw_materials[6].name="ingottin";
	raw_materials[6].amount=0;
	/*铅锭*/
	raw_materials[7].name="ingotlead";
	raw_materials[7].amount=0;
	/*粘土*/
	raw_materials[8].name="clay";
	raw_materials[8].amount=0;
	//
	
	
	
	/*太阳能板1*/
	product[0].name="solar1";
	product[0].amount=0;
	/*太阳能板2*/
	product[1].name="solar2";
	product[1].amount=0;
	/*太阳能板3*/
	product[2].name="solar3";
	product[2].amount=0;
	

}
