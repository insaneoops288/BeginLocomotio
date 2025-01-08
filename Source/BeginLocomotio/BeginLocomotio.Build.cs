// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BeginLocomotio : ModuleRules
{
	public BeginLocomotio(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
