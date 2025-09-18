// Copyright Epic Games, Inc. All Rights Reserved.

#include "Modules/ModuleManager.h"

class FLyraGameModule : public FDefaultGameModuleImpl 
{
	virtual void StartupModule() override
	{
		// Custom startup code can go here
	}

	virtual void ShutdownModule() override
	{
		// Custom shutdown code can go here
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FLyraGameModule, LyraGame, "LryaGame");
