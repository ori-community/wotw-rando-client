#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleDriver__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleDriver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleDriver__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ConsoleDriver__StaticFields_DEFINED
struct IConsoleDriver;
struct ConsoleDriver__StaticFields {
    struct IConsoleDriver* driver;
    bool is_console;
    bool called_isatty;
};
#endif
#if !defined(IL2CPP_STRUCT_ConsoleDriver__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ConsoleDriver__StaticFields_FWDDECL
#include <Modloader/app/structs/IConsoleDriver.h>
#endif
#undef IL2CPP_STRUCT_ConsoleDriver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleDriver__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleDriver__StaticFields_FWDDECL)
#include <Modloader/app/structs/ConsoleDriver__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleDriver__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
