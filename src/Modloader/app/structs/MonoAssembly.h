#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoAssembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAssembly_DEFINED)
#include <Modloader/app/structs/MonoAssembly__Fields.h>
#if defined(IL2CPP_STRUCT_MonoAssembly__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoAssembly_DEFINED
struct MonoAssembly__Class;
struct MonoAssembly {
    struct MonoAssembly__Class* klass;
    MonitorData* monitor;
    struct MonoAssembly__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoAssembly_FWDDECL)
#define IL2CPP_STRUCT_MonoAssembly_FWDDECL
#include <Modloader/app/structs/MonoAssembly__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAssembly_DEFINED) && !defined(IL2CPP_STRUCT_MonoAssembly_FWDDECL)
#include <Modloader/app/structs/MonoAssembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoAssembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
