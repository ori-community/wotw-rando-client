#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowOptionsAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowOptionsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowOptionsAction_DEFINED)
#include <Modloader/app/structs/ShowOptionsAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowOptionsAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowOptionsAction_DEFINED
struct ShowOptionsAction__Class;
struct ShowOptionsAction {
    struct ShowOptionsAction__Class* klass;
    MonitorData* monitor;
    struct ShowOptionsAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowOptionsAction_FWDDECL)
#define IL2CPP_STRUCT_ShowOptionsAction_FWDDECL
#include <Modloader/app/structs/ShowOptionsAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowOptionsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowOptionsAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowOptionsAction_FWDDECL)
#include <Modloader/app/structs/ShowOptionsAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowOptionsAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
