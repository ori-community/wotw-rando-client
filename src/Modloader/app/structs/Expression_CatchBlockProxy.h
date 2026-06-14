#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Expression_CatchBlockProxy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Expression_CatchBlockProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_Expression_CatchBlockProxy_DEFINED)
#include <Modloader/app/structs/Expression_CatchBlockProxy__Fields.h>
#if defined(IL2CPP_STRUCT_Expression_CatchBlockProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_Expression_CatchBlockProxy_DEFINED
struct Expression_CatchBlockProxy__Class;
struct Expression_CatchBlockProxy {
    struct Expression_CatchBlockProxy__Class* klass;
    MonitorData* monitor;
    struct Expression_CatchBlockProxy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Expression_CatchBlockProxy_FWDDECL)
#define IL2CPP_STRUCT_Expression_CatchBlockProxy_FWDDECL
#include <Modloader/app/structs/Expression_CatchBlockProxy__Class.h>
#endif
#undef IL2CPP_STRUCT_Expression_CatchBlockProxy_INITIALIZING
#if !defined(IL2CPP_STRUCT_Expression_CatchBlockProxy_DEFINED) && !defined(IL2CPP_STRUCT_Expression_CatchBlockProxy_FWDDECL)
#include <Modloader/app/structs/Expression_CatchBlockProxy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Expression_CatchBlockProxy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
