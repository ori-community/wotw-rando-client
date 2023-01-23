#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleAnimatedSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleAnimatedSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimatedSettings_DEFINED)
#define IL2CPP_STRUCT_TentacleAnimatedSettings_DEFINED
struct TentacleAnimatedSettings {
    float PositionAlignmentP;
    float PositionAlignmentPCoeff;
    float AngularAlignmentP;
    float ReferenceOverrideForce;
    float AnimationStretching;
    bool AlignmentOff;
    float RigidAlignToAnimation;
    float HeadPositionAlignmentToAnimation;
    float HeadRotationAlignmentToTarget;
    float HeadAlignmentMinDistance;
};
#endif
#if !defined(IL2CPP_STRUCT_TentacleAnimatedSettings_FWDDECL)
#define IL2CPP_STRUCT_TentacleAnimatedSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_TentacleAnimatedSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimatedSettings_DEFINED) && !defined(IL2CPP_STRUCT_TentacleAnimatedSettings_FWDDECL)
#include <Modloader/app/structs/TentacleAnimatedSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleAnimatedSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
