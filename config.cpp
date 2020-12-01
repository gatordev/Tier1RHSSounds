class cfgpatches {
	class Gator_Tier1_RHSUSAF_sounds {
		requiredversion = 0.1;
		//requiredaddons[] = {"a3_sounds_f", "a3_weapons_f", "a3_sounds_f_exp", "a3_weapons_f_exp", "rhsusf_sounds", "rhsusf_c_weapons", "Tier1_Weapons", "Tier1_Weapons2","Tier1_Weapons_cfg"};
		requiredaddons[] = {"rhsusf_main_Loadorder", "Tier1_Weapons", "Tier1_Weapons2","Tier1_Weapons_cfg"};
		units[] = {};
		weapons[] = {"rhs_weap_m4_Base", "rhs_weap_m16a4"};
		version = "1";
		projectname = "Suppressed RHS sound replacement";
		author = "Gatordev";
	};
};
class mode_semiauto;	
class mode_burst;	
class mode_fullauto;	

class cfgweapons {
	

	class Rifle_Base_F;	// External class reference
	//class Pistol_Base_F;	// External class reference
	
	class arifle_MX_Base_F : Rifle_Base_F {};
	//class Rifle_Short_Base_F;	// External class reference
	//class Rifle_Long_Base_F;	// External class reference
	//class UGL_F;	// External class reference
	//class srifle_EBR_F;	// External class reference
	//class LMG_Mk200_F;	// External class reference
	//class MGun;	// External class reference
	//class LMG_RCWS;	// External class reference
	
	//class SMG_02_base_F : Rifle_Short_Base_F {
	//	class Single;	// External class reference
	//	class FullAuto;	// External class reference
	//	class WeaponSlotsInfo;	// External class reference
	//};
	//class Launcher;	// External class reference
	
	//class Launcher_Base_F : Launcher {};
	//class launch_O_Titan_F;	// External class reference

	class rhs_weap_m4_Base : arifle_MX_Base_F {
		class Single : Mode_SemiAuto {
			class BaseSoundModeType {};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			
			class silencedsound : basesoundmodetype {
				soundSetShot[] = {"Tier1_416Carbine_silencerShot_SoundSet","Tier1_416Carbine_silencerTail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
		
		class Burst : Mode_Burst {
			class BaseSoundModeType {};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			
			class silencedsound : basesoundmodetype {
				soundSetShot[] = {"Tier1_416Carbine_silencerShot_SoundSet","Tier1_416Carbine_silencerTail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
		
		class FullAuto : Mode_FullAuto {
			class BaseSoundModeType {};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			
			class silencedsound : basesoundmodetype {
				soundSetShot[] = {"Tier1_416Carbine_silencerShot_SoundSet","Tier1_416Carbine_silencerTail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
	};
	
	class rhs_weap_m16a4 : rhs_weap_m4_Base {
		class Single : Single {
			class BaseSoundModeType {};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			
			class silencedsound : basesoundmodetype {
				soundSetShot[] = {"Tier1_416Carbine_silencerShot_SoundSet","Tier1_416Carbine_silencerTail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
		
		class Burst : Burst {
			class BaseSoundModeType {};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			
			class silencedsound : basesoundmodetype {
				soundSetShot[] = {"Tier1_416Carbine_silencerShot_SoundSet","Tier1_416Carbine_silencerTail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
	};
	
};
