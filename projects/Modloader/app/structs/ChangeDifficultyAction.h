#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeDifficultyAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeDifficultyAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDifficultyAction_DEFINED)
#include <Modloader/app/structs/ChangeDifficultyAction__Fields.h>
#if defined(IL2CPP_STRUCT_ChangeDifficultyAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeDifficultyAction_DEFINED
struct ChangeDifficultyAction__Class;
struct ChangeDifficultyAction {
    struct ChangeDifficultyAction__Class* klass;
    MonitorData* monitor;
    struct ChangeDifficultyAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeDifficultyAction_FWDDECL)
#define IL2CPP_STRUCT_ChangeDifficultyAction_FWDDECL
#include <Modloader/app/structs/ChangeDifficultyAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ChangeDifficultyAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeDifficultyAction_DEFINED) && !defined(IL2CPP_STRUCT_ChangeDifficultyAction_FWDDECL)
#include <Modloader/app/structs/ChangeDifficultyAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeDifficultyAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
