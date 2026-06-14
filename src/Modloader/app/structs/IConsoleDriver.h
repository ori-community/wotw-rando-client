#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConsoleDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConsoleDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConsoleDriver_DEFINED)
#define IL2CPP_STRUCT_IConsoleDriver_DEFINED
struct IConsoleDriver__Class;
struct IConsoleDriver {
    struct IConsoleDriver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IConsoleDriver_FWDDECL)
#define IL2CPP_STRUCT_IConsoleDriver_FWDDECL
#include <Modloader/app/structs/IConsoleDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_IConsoleDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConsoleDriver_DEFINED) && !defined(IL2CPP_STRUCT_IConsoleDriver_FWDDECL)
#include <Modloader/app/structs/IConsoleDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConsoleDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
