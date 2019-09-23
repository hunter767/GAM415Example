// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAM415Example : ModuleRules
{
	public GAM415Example(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
            		"Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay",
			"ProceduralMeshComponent", "RuntimeMeshComponent",
			"RHI", "RenderCore"
        });
	}
}
