#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetVector3Action_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetVector3Action_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetVector3Action_DEFINED)
#include <Modloader/app/structs/SetVector3Action__Fields.h>
#if defined(IL2CPP_STRUCT_SetVector3Action__Fields_DEFINED)
#define IL2CPP_STRUCT_SetVector3Action_DEFINED
struct SetVector3Action__Class;
struct SetVector3Action {
    struct SetVector3Action__Class* klass;
    MonitorData* monitor;
    struct SetVector3Action__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetVector3Action_FWDDECL)
#define IL2CPP_STRUCT_SetVector3Action_FWDDECL
#include <Modloader/app/structs/SetVector3Action__Class.h>
#endif
#undef IL2CPP_STRUCT_SetVector3Action_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetVector3Action_DEFINED) && !defined(IL2CPP_STRUCT_SetVector3Action_FWDDECL)
#include <Modloader/app/structs/SetVector3Action.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetVector3Action.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
