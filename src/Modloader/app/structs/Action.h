#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Action_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Action_INITIALIZING
#if !defined(IL2CPP_STRUCT_Action_DEFINED)
#include <Modloader/app/structs/Action__Fields.h>
#if defined(IL2CPP_STRUCT_Action__Fields_DEFINED)
#define IL2CPP_STRUCT_Action_DEFINED
struct Action__Class;
struct Action {
    struct Action__Class* klass;
    MonitorData* monitor;
    struct Action__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Action_FWDDECL)
#define IL2CPP_STRUCT_Action_FWDDECL
#include <Modloader/app/structs/Action__Class.h>
#endif
#undef IL2CPP_STRUCT_Action_INITIALIZING
#if !defined(IL2CPP_STRUCT_Action_DEFINED) && !defined(IL2CPP_STRUCT_Action_FWDDECL)
#include <Modloader/app/structs/Action.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Action.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
