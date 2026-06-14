#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumetricPointLight_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumetricPointLight_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricPointLight_DEFINED)
#include <Modloader/app/structs/VolumetricPointLight__Fields.h>
#if defined(IL2CPP_STRUCT_VolumetricPointLight__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumetricPointLight_DEFINED
struct VolumetricPointLight__Class;
struct VolumetricPointLight {
    struct VolumetricPointLight__Class* klass;
    MonitorData* monitor;
    struct VolumetricPointLight__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumetricPointLight_FWDDECL)
#define IL2CPP_STRUCT_VolumetricPointLight_FWDDECL
#include <Modloader/app/structs/VolumetricPointLight__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumetricPointLight_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricPointLight_DEFINED) && !defined(IL2CPP_STRUCT_VolumetricPointLight_FWDDECL)
#include <Modloader/app/structs/VolumetricPointLight.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumetricPointLight.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
