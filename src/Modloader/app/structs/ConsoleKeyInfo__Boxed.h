#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_DEFINED)
#include <Modloader/app/structs/ConsoleKeyInfo.h>
#if defined(IL2CPP_STRUCT_ConsoleKeyInfo_DEFINED)
#define IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_DEFINED
struct ConsoleKeyInfo__Class;
struct ConsoleKeyInfo__Boxed {
    struct ConsoleKeyInfo__Class* klass;
    MonitorData* monitor;
    struct ConsoleKeyInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_FWDDECL
#include <Modloader/app/structs/ConsoleKeyInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleKeyInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/ConsoleKeyInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleKeyInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
