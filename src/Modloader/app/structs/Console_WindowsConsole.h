#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Console_WindowsConsole_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Console_WindowsConsole_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console_WindowsConsole_DEFINED)
#define IL2CPP_STRUCT_Console_WindowsConsole_DEFINED
struct Console_WindowsConsole__Class;
struct Console_WindowsConsole {
    struct Console_WindowsConsole__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Console_WindowsConsole_FWDDECL)
#define IL2CPP_STRUCT_Console_WindowsConsole_FWDDECL
#include <Modloader/app/structs/Console_WindowsConsole__Class.h>
#endif
#undef IL2CPP_STRUCT_Console_WindowsConsole_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console_WindowsConsole_DEFINED) && !defined(IL2CPP_STRUCT_Console_WindowsConsole_FWDDECL)
#include <Modloader/app/structs/Console_WindowsConsole.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Console_WindowsConsole.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
