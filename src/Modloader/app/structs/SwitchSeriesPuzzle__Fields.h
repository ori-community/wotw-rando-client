#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_DEFINED
struct SwitchSeriesPuzzleSwitchSetupHolder;
struct MoonReference_1_IStateTransitionHolder_;
struct List_1_Moon_MoonReference_1__14;
struct IUberState__Array;
struct Single__Array;
struct SwitchSeriesPuzzle__Fields {
    struct MonoBehaviour__Fields _;
    struct SwitchSeriesPuzzleSwitchSetupHolder* SetupStates;
    struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
    struct List_1_Moon_MoonReference_1__14* TriggerOrder;
    struct IUberState__Array* States;
    struct Single__Array* m_prevValues;
    int32_t m_step;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__14.h>
#include <Modloader/app/structs/MoonReference_1_IStateTransitionHolder_.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/SwitchSeriesPuzzleSwitchSetupHolder.h>
#endif
#undef IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_FWDDECL)
#include <Modloader/app/structs/SwitchSeriesPuzzle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchSeriesPuzzle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
