// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class OnlineBatteryCollectEditorTarget : TargetRules
{
	public OnlineBatteryCollectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("OnlineBatteryCollect");
	}
}
