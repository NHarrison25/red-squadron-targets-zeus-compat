class CfgPatches {
	class DEVGRU_REDSQUADRON_CQB_OBJECTS_ZEUS {
		name = "Red Squadron Targets - Zeus Compat";
		author = "Harrison";
		requiredAddons[] = {"DEVGRU_RedSquadron_CQB_Objects"};

		units[] = {"metalTarget_Stand","cardTarget_Stand","metalTarget_Stand_Mozam","metalTarget_Stand_MozamSmall","metalTarget_Stand_Black","metalTarget_Stand_AZone","plasticIvanFull_green","plasticIvanShoulder_green","plasticIvanFull_red","plasticIvanShoulder_red","plasticIvanFull_Blue","plasticIvanShoulder_Blue"};
		weapons[] = {};		
	};
};

class CfgVehicles {
	class TargetP_Inf_F;
	class metalTarget_Stand:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class cardTarget_Stand:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class metalTarget_Stand_Mozam:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class metalTarget_Stand_MozamSmall:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class metalTarget_Stand_Black:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class metalTarget_Stand_AZone:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class plasticIvanFull_green:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class plasticIvanShoulder_green:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class plasticIvanFull_red:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class plasticIvanShoulder_red:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class plasticIvanFull_Blue:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
	class plasticIvanShoulder_Blue:TargetP_Inf_F {
		destrType = "DestructDefault";
		side = 3;
	};
};
