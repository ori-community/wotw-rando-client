#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogNodeContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogNodeContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogNodeContext_DEFINED)
#include <Modloader/app/structs/DialogNodeContext__Fields.h>
#if defined(IL2CPP_STRUCT_DialogNodeContext__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogNodeContext_DEFINED
struct DialogNodeContext__Class;
struct DialogNodeContext {
    struct DialogNodeContext__Class* klass;
    MonitorData* monitor;
    struct DialogNodeContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogNodeContext_FWDDECL)
#define IL2CPP_STRUCT_DialogNodeContext_FWDDECL
#include <Modloader/app/structs/DialogNodeContext__Class.h>
#endif
#undef IL2CPP_STRUCT_DialogNodeContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogNodeContext_DEFINED) && !defined(IL2CPP_STRUCT_DialogNodeContext_FWDDECL)
#include <Modloader/app/structs/DialogNodeContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogNodeContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
