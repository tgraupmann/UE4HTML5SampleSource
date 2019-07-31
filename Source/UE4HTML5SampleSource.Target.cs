// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE4HTML5SampleSourceTarget : TargetRules
{
	public UE4HTML5SampleSourceTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "UE4HTML5SampleSource" } );
	}
}
