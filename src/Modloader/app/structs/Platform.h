#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Platform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Platform_INITIALIZING
#if !defined(IL2CPP_STRUCT_Platform_DEFINED)
#define IL2CPP_STRUCT_Platform_DEFINED
struct Platform__Class;
struct Platform {
    struct Platform__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Platform_FWDDECL)
#define IL2CPP_STRUCT_Platform_FWDDECL
#include <Modloader/app/structs/Platform__Class.h>
#endif
#undef IL2CPP_STRUCT_Platform_INITIALIZING
#if !defined(IL2CPP_STRUCT_Platform_DEFINED) && !defined(IL2CPP_STRUCT_Platform_FWDDECL)
#include <Modloader/app/structs/Platform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Platform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
