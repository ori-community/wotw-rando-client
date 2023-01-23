#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RootMotionProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RootMotionProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RootMotionProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_RootMotionProcessor__Fields_DEFINED
struct RootMotionProcessorData;
struct CharacterPlatformMovement;
struct MoonAnimator;
struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3_;
struct __declspec(align(8)) RootMotionProcessor__Fields {
    struct RootMotionProcessorData* m_currentConfigData;
    struct CharacterPlatformMovement* m_platformMovement;
    struct MoonAnimator* m_animator;
    float m_gravity;
    struct Func_2_UnityEngine_Vector3_UnityEngine_Vector3_* m_motionModifier;
};
#endif
#if !defined(IL2CPP_STRUCT_RootMotionProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_RootMotionProcessor__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Func_2_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_RootMotionProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RootMotionProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RootMotionProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/RootMotionProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RootMotionProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
