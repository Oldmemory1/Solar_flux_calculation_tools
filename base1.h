struct item{
	char* name;
	double amount;
}; 
void solar5_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*太阳能板5*/
	intermediate[12].amount=+product[4].amount*3;/*3个光电池III*/ 
	product[3].amount=+product[4].amount*4;/*4个太阳能板4*/
	intermediate[13].amount=+product[4].amount;/*1个机器框架（强化）*/
	intermediate[17].amount=+product[4].amount;/*1个红石能量单元框架（满）*/
	product[4].amount=0;
}
void solar4_calcualtion(struct item* raw_materials,struct item* intermediate,struct item* product){/*太阳能板4*/
	intermediate[6].amount=+product[3].amount*3;/*3个光电池II*/
	product[2].amount=+product[3].amount*4;/*4个太阳能板3*/
	intermediate[7].amount=+product[3].amount;/*1个机器框架（硬化）*/
	intermediate[9].amount=+product[3].amount;/*1个硬化能量元件框架*/
	product[3].amount=0; 
} 
void solar3_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*太阳能板3*/ 
	intermediate[4].amount=+product[2].amount*3;/*3个光电池I*/
    product[1].amount=+product[2].amount*4;/*4个太阳能板2*/
    intermediate[2].amount=+product[2].amount;/*1个机器框架（基础）*/
	intermediate[3].amount=+product[2].amount;/*1个铅石能量元件框架*/
	product[2].amount=0; 
} 
void solar2_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*太阳能板2*/
	product[0].amount=+product[1].amount*8;/*8个太阳能板1*/
	intermediate[1].amount=+product[1].amount;/*1个红石接收线圈*/ 
	product[1].amount=0;
}
void solar1_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*太阳能板1*/
    intermediate[0].amount=+3*product[0].amount;/*3个反射镜*/
    raw_materials[2].amount=+5*product[0].amount;/*5个木板*/
    raw_materials[3].amount=+product[0].amount;/*1个红石*/ 
	product[0].amount=0;
}
void mirror_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*反射镜*/
	raw_materials[0].amount=+0.5*intermediate[0].amount;/*0.5个铁锭*/
	raw_materials[1].amount=+1.5*intermediate[0].amount;/*1.5个玻璃*/
	intermediate[0].amount=0;
}
void redstone_receiving_coil_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*红石接收线圈*/ 
	raw_materials[3].amount=+intermediate[1].amount*2;/*2个红石*/ 
	raw_materials[4].amount=+intermediate[1].amount; /*1个金锭*/
	intermediate[1].amount=0;
}
void solarcell1_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*光电池I*/
	intermediate[0].amount=+intermediate[4].amount;/*1个反射镜*/
	raw_materials[5].amount=+intermediate[4].amount;/*1个青金石*/
	intermediate[4].amount=0;
}
void frame_basic_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*机器框架（基础）*/
	raw_materials[0].amount=+intermediate[2].amount*4;/*4个铁锭*/
	raw_materials[1].amount=+intermediate[2].amount*4;/*4个玻璃*/
	intermediate[5].amount=+intermediate[2].amount;/*1个锡齿轮*/ 
	intermediate[2].amount=0;
}
void geartin_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*锡齿轮*/
	raw_materials[6].amount=+intermediate[5].amount*4;/*4个锡锭*/ 
	intermediate[5].name=0;
}
void lead_stone_energy_element_frame_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*铅石能量元件框架*/ 
	raw_materials[7].amount=+intermediate[3].amount*4;/*4个铅锭*/ 
	raw_materials[1].amount=+intermediate[3].amount*4;/*4个玻璃*/
	raw_materials[3].amount=+intermediate[3].amount*9;/*9个红石*/
	intermediate[3].amount=0;
}
void solarcell2_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*光电池II*/ 
	intermediate[4].amount=+intermediate[6].amount;/*1个光电池I*/
	raw_materials[8].amount=+16*intermediate[6].amount;/*16个粘土*/
	intermediate[6].amount=0;
}
void frame_hardened_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*机器框架（硬化）*/
	intermediate[2].amount=+intermediate[7].amount;/*1机器框架（基础）*/ 
	intermediate[11].amount=+intermediate[7].amount*4;/*4殷钢锭*/
	intermediate[8].amount=+intermediate[7].amount;/*1琥珀金齿轮*/
	intermediate[7].amount=0;
}
void gearelectrum_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*琥珀金齿轮*/
	intermediate[10].amount=+4*intermediate[8].amount;/*4琥珀金锭*/
	intermediate[8].amount=0;
}
void ingotelectrum_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	raw_materials[4].amount=+0.5*intermediate[10].amount;
	raw_materials[9].amount=+0.5*intermediate[10].amount;
	intermediate[10].amount=0;
}
void ingotinvar_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	
	raw_materials[0].amount=+intermediate[11].amount*2/3;
	raw_materials[10].amount=+intermediate[11].amount/3;
	intermediate[11].amount=0;
}
void hardened_energy_element_frame_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	intermediate[3].amount=+intermediate[9].amount;
	intermediate[11].amount=+intermediate[9].amount*4;
}
void glass_hardened_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){
	raw_materials[13].amount=+intermediate[15].amount/2;
	raw_materials[7].amount=+intermediate[15].amount/2;
	intermediate[15].amount=0;
}




