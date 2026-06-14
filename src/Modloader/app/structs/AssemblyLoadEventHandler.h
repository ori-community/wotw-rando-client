#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyLoadEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyLoadEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventHandler_DEFINED)
#include <Modloader/app/structs/AssemblyLoadEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyLoadEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyLoadEventHandler_DEFINED
struct AssemblyLoadEventHandler__Class;
struct AssemblyLoadEventHandler {
    struct AssemblyLoadEventHandler__Class* klass;
    MonitorData* monitor;
    struct AssemblyLoadEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventHandler_FWDDECL)
#define IL2CPP_STRUCT_AssemblyLoadEventHandler_FWDDECL
#include <Modloader/app/structs/AssemblyLoadEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyLoadEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyLoadEventHandler_FWDDECL)
#include <Modloader/app/structs/AssemblyLoadEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyLoadEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
