#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Console_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Console_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console_DEFINED)
#define IL2CPP_STRUCT_Console_DEFINED
struct Console__Class;
struct Console {
    struct Console__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Console_FWDDECL)
#define IL2CPP_STRUCT_Console_FWDDECL
#include <Modloader/app/structs/Console__Class.h>
#endif
#undef IL2CPP_STRUCT_Console_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console_DEFINED) && !defined(IL2CPP_STRUCT_Console_FWDDECL)
#include <Modloader/app/structs/Console.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Console.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
