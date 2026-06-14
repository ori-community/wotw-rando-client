#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrewarmSkipAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrewarmSkipAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmSkipAction_DEFINED)
#include <Modloader/app/structs/PrewarmSkipAction__Fields.h>
#if defined(IL2CPP_STRUCT_PrewarmSkipAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PrewarmSkipAction_DEFINED
struct PrewarmSkipAction__Class;
struct PrewarmSkipAction {
    struct PrewarmSkipAction__Class* klass;
    MonitorData* monitor;
    struct PrewarmSkipAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrewarmSkipAction_FWDDECL)
#define IL2CPP_STRUCT_PrewarmSkipAction_FWDDECL
#include <Modloader/app/structs/PrewarmSkipAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PrewarmSkipAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrewarmSkipAction_DEFINED) && !defined(IL2CPP_STRUCT_PrewarmSkipAction_FWDDECL)
#include <Modloader/app/structs/PrewarmSkipAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrewarmSkipAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
