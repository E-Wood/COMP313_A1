// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class COMP313_A1 : ModuleRules
{
	public COMP313_A1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
