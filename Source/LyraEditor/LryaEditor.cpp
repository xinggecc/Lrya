// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraEditor.h"
#include "Modules/ModuleManager.h"

class FLyraEditorModule : public FDefaultGameModuleImpl 
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



IMPLEMENT_MODULE(FLyraEditorModule, LyraEditor);
