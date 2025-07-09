// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DCMFG : ModuleRules
{
	public DCMFG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"DCMFG",
			"DCMFG/Variant_Platforming",
			"DCMFG/Variant_Combat",
			"DCMFG/Variant_Combat/AI",
			"DCMFG/Variant_SideScrolling",
			"DCMFG/Variant_SideScrolling/Gameplay",
			"DCMFG/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
