#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeAssembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeAssembly_DEFINED)
#include <Modloader/app/structs/RuntimeAssembly__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeAssembly__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeAssembly_DEFINED
struct RuntimeAssembly__Class;
struct RuntimeAssembly {
    struct RuntimeAssembly__Class* klass;
    MonitorData* monitor;
    struct RuntimeAssembly__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeAssembly_FWDDECL)
#define IL2CPP_STRUCT_RuntimeAssembly_FWDDECL
#include <Modloader/app/structs/RuntimeAssembly__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeAssembly_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeAssembly_FWDDECL)
#include <Modloader/app/structs/RuntimeAssembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeAssembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
