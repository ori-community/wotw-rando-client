#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Registry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Registry_INITIALIZING
#if !defined(IL2CPP_STRUCT_Registry_DEFINED)
#define IL2CPP_STRUCT_Registry_DEFINED
struct Registry__Class;
struct Registry {
    struct Registry__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Registry_FWDDECL)
#define IL2CPP_STRUCT_Registry_FWDDECL
#include <Modloader/app/structs/Registry__Class.h>
#endif
#undef IL2CPP_STRUCT_Registry_INITIALIZING
#if !defined(IL2CPP_STRUCT_Registry_DEFINED) && !defined(IL2CPP_STRUCT_Registry_FWDDECL)
#include <Modloader/app/structs/Registry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Registry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
