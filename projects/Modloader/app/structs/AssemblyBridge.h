#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyBridge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyBridge_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyBridge_DEFINED)
#define IL2CPP_STRUCT_AssemblyBridge_DEFINED
struct AssemblyBridge__Class;
struct AssemblyBridge {
    struct AssemblyBridge__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AssemblyBridge_FWDDECL)
#define IL2CPP_STRUCT_AssemblyBridge_FWDDECL
#include <Modloader/app/structs/AssemblyBridge__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyBridge_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyBridge_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyBridge_FWDDECL)
#include <Modloader/app/structs/AssemblyBridge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyBridge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
