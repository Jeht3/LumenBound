using UnrealBuildTool;

public class MazeGenerator: ModuleRules
{
    public MazeGenerator(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});
    }
}
