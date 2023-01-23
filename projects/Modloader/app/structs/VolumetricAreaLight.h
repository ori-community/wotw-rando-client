#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumetricAreaLight_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumetricAreaLight_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricAreaLight_DEFINED)
#include <Modloader/app/structs/VolumetricAreaLight__Fields.h>
#if defined(IL2CPP_STRUCT_VolumetricAreaLight__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumetricAreaLight_DEFINED
struct VolumetricAreaLight__Class;
struct VolumetricAreaLight {
    struct VolumetricAreaLight__Class* klass;
    MonitorData* monitor;
    struct VolumetricAreaLight__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumetricAreaLight_FWDDECL)
#define IL2CPP_STRUCT_VolumetricAreaLight_FWDDECL
#include <Modloader/app/structs/VolumetricAreaLight__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumetricAreaLight_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricAreaLight_DEFINED) && !defined(IL2CPP_STRUCT_VolumetricAreaLight_FWDDECL)
#include <Modloader/app/structs/VolumetricAreaLight.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumetricAreaLight.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
