// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StarTa_0424 : ModuleRules
{
	public StarTa_0424(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
