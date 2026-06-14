#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsConsoleDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsConsoleDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsConsoleDriver_DEFINED)
#include <Modloader/app/structs/WindowsConsoleDriver__Fields.h>
#if defined(IL2CPP_STRUCT_WindowsConsoleDriver__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowsConsoleDriver_DEFINED
struct WindowsConsoleDriver__Class;
struct WindowsConsoleDriver {
    struct WindowsConsoleDriver__Class* klass;
    MonitorData* monitor;
    struct WindowsConsoleDriver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowsConsoleDriver_FWDDECL)
#define IL2CPP_STRUCT_WindowsConsoleDriver_FWDDECL
#include <Modloader/app/structs/WindowsConsoleDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_WindowsConsoleDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsConsoleDriver_DEFINED) && !defined(IL2CPP_STRUCT_WindowsConsoleDriver_FWDDECL)
#include <Modloader/app/structs/WindowsConsoleDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsConsoleDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
