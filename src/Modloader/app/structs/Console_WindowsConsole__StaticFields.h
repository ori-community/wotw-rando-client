#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_DEFINED
struct Console_WindowsConsole_WindowsCancelHandler;
struct Console_WindowsConsole__StaticFields {
    bool ctrlHandlerAdded;
    struct Console_WindowsConsole_WindowsCancelHandler* cancelHandler;
};
#endif
#if !defined(IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_FWDDECL
#include <Modloader/app/structs/Console_WindowsConsole_WindowsCancelHandler.h>
#endif
#undef IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Console_WindowsConsole__StaticFields_FWDDECL)
#include <Modloader/app/structs/Console_WindowsConsole__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Console_WindowsConsole__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
