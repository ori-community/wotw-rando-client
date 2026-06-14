#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoConfiguration_DEFINED)
#define IL2CPP_STRUCT_DemoConfiguration_DEFINED
struct DemoConfiguration__Class;
struct DemoConfiguration {
    struct DemoConfiguration__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DemoConfiguration_FWDDECL)
#define IL2CPP_STRUCT_DemoConfiguration_FWDDECL
#include <Modloader/app/structs/DemoConfiguration__Class.h>
#endif
#undef IL2CPP_STRUCT_DemoConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_DemoConfiguration_FWDDECL)
#include <Modloader/app/structs/DemoConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
