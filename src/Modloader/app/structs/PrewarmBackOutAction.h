#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrewarmBackOutAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrewarmBackOutAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmBackOutAction_DEFINED)
#include <Modloader/app/structs/PrewarmBackOutAction__Fields.h>
#if defined(IL2CPP_STRUCT_PrewarmBackOutAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PrewarmBackOutAction_DEFINED
struct PrewarmBackOutAction__Class;
struct PrewarmBackOutAction {
    struct PrewarmBackOutAction__Class* klass;
    MonitorData* monitor;
    struct PrewarmBackOutAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrewarmBackOutAction_FWDDECL)
#define IL2CPP_STRUCT_PrewarmBackOutAction_FWDDECL
#include <Modloader/app/structs/PrewarmBackOutAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PrewarmBackOutAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmBackOutAction_DEFINED) && !defined(IL2CPP_STRUCT_PrewarmBackOutAction_FWDDECL)
#include <Modloader/app/structs/PrewarmBackOutAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrewarmBackOutAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
