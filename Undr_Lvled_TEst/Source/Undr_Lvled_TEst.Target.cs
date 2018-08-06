// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Undr_Lvled_TEstTarget : TargetRules
{
	public Undr_Lvled_TEstTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Undr_Lvled_TEst" } );
	}
}
