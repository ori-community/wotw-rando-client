#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Spring__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Spring__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spring__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Spring__Fields_DEFINED
struct MoonTimeline;
struct Func_1_Boolean_;
struct Rigidbody;
struct Spring__Fields {
    struct MonoBehaviour__Fields _;
    float Height;
    float StopDecelerationMultiplier;
    struct MoonTimeline* OnLandCharacter;
    struct MoonTimeline* OnLandGrenade;
    struct MoonTimeline* OnLandCommon;
    struct MoonTimeline* OnLaunchCharacter;
    struct Func_1_Boolean_* AllowJumpModifier;
    struct Rigidbody* PushRigidbody;
    float PushForce;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Spring__Fields_FWDDECL)
#define IL2CPP_STRUCT_Spring__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_Spring__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spring__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Spring__Fields_FWDDECL)
#include <Modloader/app/structs/Spring__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Spring__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
