#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/UnlockedCutscenes__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_UnlockedCutscenes__Enum_DEFINED)
#define IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_DEFINED
struct CutsceneUnlockedCondition__Fields {
    struct Condition_1__Fields _;
    UnlockedCutscenes__Enum Cutscene;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneUnlockedCondition__Fields_FWDDECL)
#include <Modloader/app/structs/CutsceneUnlockedCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneUnlockedCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
