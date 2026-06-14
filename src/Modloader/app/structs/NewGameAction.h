#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewGameAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewGameAction_DEFINED)
#include <Modloader/app/structs/NewGameAction__Fields.h>
#if defined(IL2CPP_STRUCT_NewGameAction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewGameAction_DEFINED
struct NewGameAction__Class;
struct NewGameAction {
    struct NewGameAction__Class* klass;
    MonitorData* monitor;
    struct NewGameAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewGameAction_FWDDECL)
#define IL2CPP_STRUCT_NewGameAction_FWDDECL
#include <Modloader/app/structs/NewGameAction__Class.h>
#endif
#undef IL2CPP_STRUCT_NewGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewGameAction_DEFINED) && !defined(IL2CPP_STRUCT_NewGameAction_FWDDECL)
#include <Modloader/app/structs/NewGameAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewGameAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
