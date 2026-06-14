#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContext_DEFINED)
#define IL2CPP_STRUCT_CallContext_DEFINED
struct CallContext__Class;
struct CallContext {
    struct CallContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CallContext_FWDDECL)
#define IL2CPP_STRUCT_CallContext_FWDDECL
#include <Modloader/app/structs/CallContext__Class.h>
#endif
#undef IL2CPP_STRUCT_CallContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallContext_DEFINED) && !defined(IL2CPP_STRUCT_CallContext_FWDDECL)
#include <Modloader/app/structs/CallContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
