// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EpitechGameJam2021 : ModuleRules
{
	public EpitechGameJam2021(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
