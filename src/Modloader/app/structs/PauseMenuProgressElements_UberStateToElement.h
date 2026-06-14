#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_DEFINED)
#define IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_DEFINED
struct DesiredUberStateInt;
struct DesiredUberStateBool;
struct ConditionUberState;
struct GameObject;
struct MoonTimeline;
struct PauseMenuProgressElements_UberStateToElement {
    struct DesiredUberStateInt* RequiredState;
    struct DesiredUberStateBool* RequiredBoolState;
    struct ConditionUberState* Condition;
    struct GameObject* Element;
    struct MoonTimeline* ShowTimeline;
};
#endif
#if !defined(IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_FWDDECL)
#define IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/DesiredUberStateBool.h>
#include <Modloader/app/structs/DesiredUberStateInt.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_DEFINED) && !defined(IL2CPP_STRUCT_PauseMenuProgressElements_UberStateToElement_FWDDECL)
#include <Modloader/app/structs/PauseMenuProgressElements_UberStateToElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseMenuProgressElements_UberStateToElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
