struct item{
	char* name;
	double amount;
}; 
void solar5_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*̫���ܰ�5*/
	intermediate[12].amount=+product[4].amount*3;/*3������III*/ 
	product[3].amount=+product[4].amount*4;/*4��̫���ܰ�4*/
	intermediate[13].amount=+product[4].amount;/*1��������ܣ�ǿ����*/
	intermediate[17].amount=+product[4].amount;/*1����ʯ������Ԫ��ܣ�����*/
	product[4].amount=0;
}
void solar4_calcualtion(struct item* raw_materials,struct item* intermediate,struct item* product){/*̫���ܰ�4*/
	intermediate[6].amount=+product[3].amount*3;/*3������II*/
	product[2].amount=+product[3].amount*4;/*4��̫���ܰ�3*/
	intermediate[7].amount=+product[3].amount;/*1��������ܣ�Ӳ����*/
	intermediate[9].amount=+product[3].amount;/*1��Ӳ������Ԫ�����*/
	product[3].amount=0; 
} 
void solar3_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*̫���ܰ�3*/ 
	intermediate[4].amount=+product[2].amount*3;/*3������I*/
    product[1].amount=+product[2].amount*4;/*4��̫���ܰ�2*/
    intermediate[2].amount=+product[2].amount;/*1��������ܣ�������*/
	intermediate[3].amount=+product[2].amount;/*1��Ǧʯ����Ԫ�����*/
	product[2].amount=0; 
} 
void solar2_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*̫���ܰ�2*/
	product[0].amount=+product[1].amount*8;/*8��̫���ܰ�1*/
	intermediate[1].amount=+product[1].amount;/*1����ʯ������Ȧ*/ 
	product[1].amount=0;
}
void solar1_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*̫���ܰ�1*/
    intermediate[0].amount=+3*product[0].amount;/*3�����侵*/
    raw_materials[2].amount=+5*product[0].amount;/*5��ľ��*/
    raw_materials[3].amount=+product[0].amount;/*1����ʯ*/ 
	product[0].amount=0;
}
void mirror_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*���侵*/
	raw_materials[0].amount=+0.5*intermediate[0].amount;/*0.5������*/
	raw_materials[1].amount=+1.5*intermediate[0].amount;/*1.5������*/
	intermediate[0].amount=0;
}
void redstone_receiving_coil_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*��ʯ������Ȧ*/ 
	raw_materials[3].amount=+intermediate[1].amount*2;/*2����ʯ*/ 
	raw_materials[4].amount=+intermediate[1].amount; /*1����*/
	intermediate[1].amount=0;
}
void solarcell1_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*����I*/
	intermediate[0].amount=+intermediate[4].amount;/*1�����侵*/
	raw_materials[5].amount=+intermediate[4].amount;/*1�����ʯ*/
	intermediate[4].amount=0;
}
void frame_basic_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*������ܣ�������*/
	raw_materials[0].amount=+intermediate[2].amount*4;/*4������*/
	raw_materials[1].amount=+intermediate[2].amount*4;/*4������*/
	intermediate[5].amount=+intermediate[2].amount;/*1��������*/ 
	intermediate[2].amount=0;
}
void geartin_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*������*/
	raw_materials[6].amount=+intermediate[5].amount*4;/*4������*/ 
	intermediate[5].name=0;
}
void lead_stone_energy_element_frame_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*Ǧʯ����Ԫ�����*/ 
	raw_materials[7].amount=+intermediate[3].amount*4;/*4��Ǧ��*/ 
	raw_materials[1].amount=+intermediate[3].amount*4;/*4������*/
	raw_materials[3].amount=+intermediate[3].amount*9;/*9����ʯ*/
	intermediate[3].amount=0;
}
void solarcell2_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*����II*/ 
	intermediate[4].amount=+intermediate[6].amount;/*1������I*/
	raw_materials[8].amount=+16*intermediate[6].amount;/*16��ճ��*/
	intermediate[6].amount=0;
}
void frame_hardened_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*������ܣ�Ӳ����*/
	intermediate[2].amount=+intermediate[7].amount;/*1������ܣ�������*/ 
	intermediate[11].amount=+intermediate[7].amount*4;/*4��ֶ�*/
	intermediate[8].amount=+intermediate[7].amount;/*1��������*/
	intermediate[7].amount=0;
}
void gearelectrum_calculation(struct item* raw_materials,struct item* intermediate,struct item* product){/*��������*/
	intermediate[10].amount=+4*intermediate[8].amount;/*4�����*/
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




