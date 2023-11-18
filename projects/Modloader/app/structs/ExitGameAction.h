#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExitGameAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExitGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExitGameAction_DEFINED)
#include <Modloader/app/structs/ExitGameAction__Fields.h>
#if defined(IL2CPP_STRUCT_ExitGameAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ExitGameAction_DEFINED
struct ExitGameAction__Class;
struct ExitGameAction {
    struct ExitGameAction__Class* klass;
    MonitorData* monitor;
    struct ExitGameAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExitGameAction_FWDDECL)
#define IL2CPP_STRUCT_ExitGameAction_FWDDECL
#include <Modloader/app/structs/ExitGameAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ExitGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExitGameAction_DEFINED) && !defined(IL2CPP_STRUCT_ExitGameAction_FWDDECL)
#include <Modloader/app/structs/ExitGameAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExitGameAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
