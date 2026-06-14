#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateAndHold__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateAndHold__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAndHold__Fields_DEFINED)
#include <Modloader/app/structs/ActivateAndHold_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActivateAndHold_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ActivateAndHold__Fields_DEFINED
struct MoonReference_1_ILever_;
struct MoonTimeline;
struct ILever;
struct ActivateAndHold__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_ILever_* Lever;
    struct MoonTimeline* Forward;
    struct MoonTimeline* Hold;
    struct MoonTimeline* Back;
    ActivateAndHold_State__Enum m_currentState;

    struct ILever* m_resolvedLever;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateAndHold__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivateAndHold__Fields_FWDDECL
#include <Modloader/app/structs/ILever.h>
#include <Modloader/app/structs/MoonReference_1_ILever_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_ActivateAndHold__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAndHold__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivateAndHold__Fields_FWDDECL)
#include <Modloader/app/structs/ActivateAndHold__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateAndHold__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
