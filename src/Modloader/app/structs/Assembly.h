#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Assembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Assembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assembly_DEFINED)
#include <Modloader/app/structs/Assembly__Fields.h>
#if defined(IL2CPP_STRUCT_Assembly__Fields_DEFINED)
#define IL2CPP_STRUCT_Assembly_DEFINED
struct Assembly__Class;
struct Assembly {
    struct Assembly__Class* klass;
    MonitorData* monitor;
    struct Assembly__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Assembly_FWDDECL)
#define IL2CPP_STRUCT_Assembly_FWDDECL
#include <Modloader/app/structs/Assembly__Class.h>
#endif
#undef IL2CPP_STRUCT_Assembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_Assembly_DEFINED) && !defined(IL2CPP_STRUCT_Assembly_FWDDECL)
#include <Modloader/app/structs/Assembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Assembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
