#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyCompiledEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyCompiledEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyCompiledEvent_DEFINED)
#include <Modloader/app/structs/AssemblyCompiledEvent__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyCompiledEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyCompiledEvent_DEFINED
struct AssemblyCompiledEvent__Class;
struct AssemblyCompiledEvent {
    struct AssemblyCompiledEvent__Class* klass;
    MonitorData* monitor;
    struct AssemblyCompiledEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyCompiledEvent_FWDDECL)
#define IL2CPP_STRUCT_AssemblyCompiledEvent_FWDDECL
#include <Modloader/app/structs/AssemblyCompiledEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyCompiledEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyCompiledEvent_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyCompiledEvent_FWDDECL)
#include <Modloader/app/structs/AssemblyCompiledEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyCompiledEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
