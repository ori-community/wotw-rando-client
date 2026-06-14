#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightPlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightPlatform_DEFINED)
#include <Modloader/app/structs/LightPlatform__Fields.h>
#if defined(IL2CPP_STRUCT_LightPlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_LightPlatform_DEFINED
struct LightPlatform__Class;
struct LightPlatform {
    struct LightPlatform__Class* klass;
    MonitorData* monitor;
    struct LightPlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightPlatform_FWDDECL)
#define IL2CPP_STRUCT_LightPlatform_FWDDECL
#include <Modloader/app/structs/LightPlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_LightPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightPlatform_DEFINED) && !defined(IL2CPP_STRUCT_LightPlatform_FWDDECL)
#include <Modloader/app/structs/LightPlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightPlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
