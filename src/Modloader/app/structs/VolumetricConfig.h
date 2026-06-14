#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumetricConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumetricConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricConfig_DEFINED)
#include <Modloader/app/structs/VolumetricConfig__Fields.h>
#if defined(IL2CPP_STRUCT_VolumetricConfig__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumetricConfig_DEFINED
struct VolumetricConfig__Class;
struct VolumetricConfig {
    struct VolumetricConfig__Class* klass;
    MonitorData* monitor;
    struct VolumetricConfig__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumetricConfig_FWDDECL)
#define IL2CPP_STRUCT_VolumetricConfig_FWDDECL
#include <Modloader/app/structs/VolumetricConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumetricConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricConfig_DEFINED) && !defined(IL2CPP_STRUCT_VolumetricConfig_FWDDECL)
#include <Modloader/app/structs/VolumetricConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumetricConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
