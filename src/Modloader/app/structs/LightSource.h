#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightSource_DEFINED)
#include <Modloader/app/structs/LightSource__Fields.h>
#if defined(IL2CPP_STRUCT_LightSource__Fields_DEFINED)
#define IL2CPP_STRUCT_LightSource_DEFINED
struct LightSource__Class;
struct LightSource {
    struct LightSource__Class* klass;
    MonitorData* monitor;
    struct LightSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightSource_FWDDECL)
#define IL2CPP_STRUCT_LightSource_FWDDECL
#include <Modloader/app/structs/LightSource__Class.h>
#endif
#undef IL2CPP_STRUCT_LightSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightSource_DEFINED) && !defined(IL2CPP_STRUCT_LightSource_FWDDECL)
#include <Modloader/app/structs/LightSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
