#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Configuration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Configuration_INITIALIZING
#if !defined(IL2CPP_STRUCT_Configuration_DEFINED)
#define IL2CPP_STRUCT_Configuration_DEFINED
struct Configuration__Class;
struct Configuration {
    struct Configuration__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Configuration_FWDDECL)
#define IL2CPP_STRUCT_Configuration_FWDDECL
#include <Modloader/app/structs/Configuration__Class.h>
#endif
#undef IL2CPP_STRUCT_Configuration_INITIALIZING
#if !defined(IL2CPP_STRUCT_Configuration_DEFINED) && !defined(IL2CPP_STRUCT_Configuration_FWDDECL)
#include <Modloader/app/structs/Configuration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Configuration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
