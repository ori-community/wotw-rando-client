#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadGameAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadGameAction_DEFINED)
#include <Modloader/app/structs/LoadGameAction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadGameAction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadGameAction_DEFINED
struct LoadGameAction__Class;
struct LoadGameAction {
    struct LoadGameAction__Class* klass;
    MonitorData* monitor;
    struct LoadGameAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadGameAction_FWDDECL)
#define IL2CPP_STRUCT_LoadGameAction_FWDDECL
#include <Modloader/app/structs/LoadGameAction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadGameAction_DEFINED) && !defined(IL2CPP_STRUCT_LoadGameAction_FWDDECL)
#include <Modloader/app/structs/LoadGameAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadGameAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
