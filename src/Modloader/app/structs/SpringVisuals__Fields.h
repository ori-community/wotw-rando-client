#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpringVisuals__Fields_DEFINED
struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_;
struct MoonTimeline;
struct SpringVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_* JumpedOn;
    struct MoonTimeline* OnLandCharacter;
    struct MoonTimeline* OnLandGrenade;
    struct MoonTimeline* OnLandCommon;
    struct MoonTimeline* OnLaunchCharacter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpringVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpringVisuals__Fields_FWDDECL
#include <Modloader/app/structs/Action_3_UnityEngine_GameObject_UnityEngine_Vector2_Boolean_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SpringVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpringVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/SpringVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
