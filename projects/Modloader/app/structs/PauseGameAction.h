#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseGameAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseGameAction_DEFINED)
#include <Modloader/app/structs/PauseGameAction__Fields.h>
#if defined(IL2CPP_STRUCT_PauseGameAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PauseGameAction_DEFINED
struct PauseGameAction__Class;
struct PauseGameAction {
    struct PauseGameAction__Class* klass;
    MonitorData* monitor;
    struct PauseGameAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseGameAction_FWDDECL)
#define IL2CPP_STRUCT_PauseGameAction_FWDDECL
#include <Modloader/app/structs/PauseGameAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PauseGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseGameAction_DEFINED) && !defined(IL2CPP_STRUCT_PauseGameAction_FWDDECL)
#include <Modloader/app/structs/PauseGameAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseGameAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
