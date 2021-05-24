// You can edit and repack this to your hearts content 
// Feel free to give me credit and or a donation: paypal.me/hayward72
// Share and share-alike. Thank you :)

class CfgPatches
{
	class Haywards_Backpack_Mod
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Backpacks"
		};
	};
};
class CfgMods
{
	class Haywards_Backpack_Mod
	{
		dir="HaywardsBackpackMod";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Haywards Backpack Mod";
		credits=""; 
		author="Lee Hayward";
		authorID="76561198040948171";  
		version="2.0";
		extra=0;
		type="mod";
	};
};

class CfgVehicles
{

	class Clothing;

	class CourierBag: Clothing // Burlap Courier Bag
	{
		scope=2;
		itemSize[]={3,3};
		itemsCargoSize[]={10,6};
		weight=600;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
			
		};
	};

	class FurCourierBag: Clothing // Fur Courier Backpack
	{
		scope=2;
		itemSize[]={3,3};
		itemsCargoSize[]={10,6};
		weight=600;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
			
		};
	};	

	class SmershBag: Clothing  // Utility Backpack 
	{
		scope=2;
		itemSize[]={3,3};
		itemsCargoSize[]={10,6};
		weight=600;
		varWetMax=0;
		heatIsolation=1;
	};

	class ChildBag_ColorBase: Clothing
	{
		itemSize[]={3,3};
		itemsCargoSize[]={10,6};
		weight=600;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
			
		};
	};

	class AssaultBag_ColorBase: Clothing
	{
		itemSize[]={3,4};
		itemsCargoSize[]={10,8};
		weight=900;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife"
		};
	};
	
	class TaloonBag_ColorBase: Clothing // Hiking Backpack 
	{
		weight=900;
		itemSize[]={3,4};
		itemsCargoSize[]={10,8};
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife"
		};
	};

	class ImprovisedBag: Clothing
	{
		scope=2;
		itemSize[]={3,4};
		itemsCargoSize[]={10,8};
		weight=900;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife"
		};
	};

	class FurImprovisedBag: Clothing
	{
		scope=2;
		itemSize[]={3,4};
		itemsCargoSize[]={10,8};
		weight=900;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife"
		};
	};	

	class LeatherSack_ColorBase: Clothing // Leather Backpack
	{
		rotationFlags=2;
		itemSize[]={4,5};
		itemsCargoSize[]={10,12};
		weight=1300;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"CookingEquipment",
			"CookingTripod"
			
		};
	};
	
	class CoyoteBag_ColorBase: Clothing // Tactical Backpack 
	{
		itemSize[]={4,5};
		itemsCargoSize[]={10,12};
		weight=1300;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"CookingEquipment",
			"CookingTripod"
			
		};
		
	};
	
	class DryBag_ColorBase: Clothing
	{
		itemSize[]={4,5};
		itemsCargoSize[]={10,12};
		weight=1300;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"CookingEquipment",
			"CookingTripod"
			
		};
	};
	
	class HuntingBag: Clothing
	{
		scope=2;
		itemSize[]={4,5};
		itemsCargoSize[]={10,12};
		weight=1300;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"CookingEquipment",
			"CookingTripod"
			
		};
	};	
	
	class TortillaBag: Clothing // Combat Backpack 
	{
		scope=2;
		itemSize[]={4,5};
		itemsCargoSize[]={10,12};
		weight=1300;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"CookingEquipment",
			"CookingTripod"
			
		};
	};	

	class MountainBag_ColorBase: Clothing
	{
		itemSize[]={4,6};
		itemsCargoSize[]={10,16};
		weight=2300;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"Pistol",
			"CookingEquipment",
			"CookingTripod"
			
		};
	};
	
	class AliceBag_ColorBase: Clothing // Field Backpack 
	{
		itemSize[]={5,6};
		itemsCargoSize[]={10,18};
		weight=2300;
		varWetMax=0;
		heatIsolation=1;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Knife",
			"Shoulder",
			"Pistol",
			"CookingEquipment",
			"CookingTripod"
			
		};
		
	};

};

