#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicLightSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicLightSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLightSource_DEFINED)
#include <Modloader/app/structs/DynamicLightSource__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicLightSource__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicLightSource_DEFINED
struct DynamicLightSource__Class;
struct DynamicLightSource {
    struct DynamicLightSource__Class* klass;
    MonitorData* monitor;
    struct DynamicLightSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicLightSource_FWDDECL)
#define IL2CPP_STRUCT_DynamicLightSource_FWDDECL
#include <Modloader/app/structs/DynamicLightSource__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicLightSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLightSource_DEFINED) && !defined(IL2CPP_STRUCT_DynamicLightSource_FWDDECL)
#include <Modloader/app/structs/DynamicLightSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicLightSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
