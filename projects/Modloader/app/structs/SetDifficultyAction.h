#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetDifficultyAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetDifficultyAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetDifficultyAction_DEFINED)
#include <Modloader/app/structs/SetDifficultyAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetDifficultyAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetDifficultyAction_DEFINED
struct SetDifficultyAction__Class;
struct SetDifficultyAction {
    struct SetDifficultyAction__Class* klass;
    MonitorData* monitor;
    struct SetDifficultyAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetDifficultyAction_FWDDECL)
#define IL2CPP_STRUCT_SetDifficultyAction_FWDDECL
#include <Modloader/app/structs/SetDifficultyAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetDifficultyAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetDifficultyAction_DEFINED) && !defined(IL2CPP_STRUCT_SetDifficultyAction_FWDDECL)
#include <Modloader/app/structs/SetDifficultyAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetDifficultyAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
