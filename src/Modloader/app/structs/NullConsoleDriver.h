#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NullConsoleDriver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NullConsoleDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullConsoleDriver_DEFINED)
#define IL2CPP_STRUCT_NullConsoleDriver_DEFINED
struct NullConsoleDriver__Class;
struct NullConsoleDriver {
    struct NullConsoleDriver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NullConsoleDriver_FWDDECL)
#define IL2CPP_STRUCT_NullConsoleDriver_FWDDECL
#include <Modloader/app/structs/NullConsoleDriver__Class.h>
#endif
#undef IL2CPP_STRUCT_NullConsoleDriver_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullConsoleDriver_DEFINED) && !defined(IL2CPP_STRUCT_NullConsoleDriver_FWDDECL)
#include <Modloader/app/structs/NullConsoleDriver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NullConsoleDriver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
