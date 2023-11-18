#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewSaveDataAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewSaveDataAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSaveDataAction_DEFINED)
#include <Modloader/app/structs/NewSaveDataAction__Fields.h>
#if defined(IL2CPP_STRUCT_NewSaveDataAction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewSaveDataAction_DEFINED
struct NewSaveDataAction__Class;
struct NewSaveDataAction {
    struct NewSaveDataAction__Class* klass;
    MonitorData* monitor;
    struct NewSaveDataAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewSaveDataAction_FWDDECL)
#define IL2CPP_STRUCT_NewSaveDataAction_FWDDECL
#include <Modloader/app/structs/NewSaveDataAction__Class.h>
#endif
#undef IL2CPP_STRUCT_NewSaveDataAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSaveDataAction_DEFINED) && !defined(IL2CPP_STRUCT_NewSaveDataAction_FWDDECL)
#include <Modloader/app/structs/NewSaveDataAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewSaveDataAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
