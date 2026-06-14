#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveGameAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveGameAction_DEFINED)
#include <Modloader/app/structs/SaveGameAction__Fields.h>
#if defined(IL2CPP_STRUCT_SaveGameAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveGameAction_DEFINED
struct SaveGameAction__Class;
struct SaveGameAction {
    struct SaveGameAction__Class* klass;
    MonitorData* monitor;
    struct SaveGameAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveGameAction_FWDDECL)
#define IL2CPP_STRUCT_SaveGameAction_FWDDECL
#include <Modloader/app/structs/SaveGameAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveGameAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveGameAction_DEFINED) && !defined(IL2CPP_STRUCT_SaveGameAction_FWDDECL)
#include <Modloader/app/structs/SaveGameAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveGameAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
