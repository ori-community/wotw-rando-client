#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsConverterRegistrar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsConverterRegistrar_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConverterRegistrar_DEFINED)
#define IL2CPP_STRUCT_fsConverterRegistrar_DEFINED
struct fsConverterRegistrar__Class;
struct fsConverterRegistrar {
    struct fsConverterRegistrar__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsConverterRegistrar_FWDDECL)
#define IL2CPP_STRUCT_fsConverterRegistrar_FWDDECL
#include <Modloader/app/structs/fsConverterRegistrar__Class.h>
#endif
#undef IL2CPP_STRUCT_fsConverterRegistrar_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConverterRegistrar_DEFINED) && !defined(IL2CPP_STRUCT_fsConverterRegistrar_FWDDECL)
#include <Modloader/app/structs/fsConverterRegistrar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsConverterRegistrar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
