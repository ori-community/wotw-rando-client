#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContextCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContextCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextCallback_DEFINED)
#include <Modloader/app/structs/ContextCallback__Fields.h>
#if defined(IL2CPP_STRUCT_ContextCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_ContextCallback_DEFINED
struct ContextCallback__Class;
struct ContextCallback {
    struct ContextCallback__Class* klass;
    MonitorData* monitor;
    struct ContextCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContextCallback_FWDDECL)
#define IL2CPP_STRUCT_ContextCallback_FWDDECL
#include <Modloader/app/structs/ContextCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_ContextCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextCallback_DEFINED) && !defined(IL2CPP_STRUCT_ContextCallback_FWDDECL)
#include <Modloader/app/structs/ContextCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContextCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
