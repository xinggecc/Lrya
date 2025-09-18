// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LyraGame : ModuleRules
{
	public LyraGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[]
		{
			"LyraGame"
		});
		
		PrivateIncludePaths.AddRange(new string[] { });
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", 
				"CoreUObject", 
				"Engine", 
				"InputCore",
				"EnhancedInput"
			});

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
