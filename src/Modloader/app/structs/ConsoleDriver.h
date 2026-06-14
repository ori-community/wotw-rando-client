#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleDriver_DEFINED)
#define IL2CPP_STRUCT_ConsoleDriver_DEFINED
struct ConsoleDriver__Class;
struct ConsoleDriver {
    struct ConsoleDriver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConsoleDriver_FWDDECL)
#define IL2CPP_STRUCT_ConsoleDriver_FWDDECL
#include <Modloader/app/structs/ConsoleDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_ConsoleDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleDriver_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleDriver_FWDDECL)
#include <Modloader/app/structs/ConsoleDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
