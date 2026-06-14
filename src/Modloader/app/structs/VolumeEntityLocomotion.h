#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEntityLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEntityLocomotion_DEFINED)
#include <Modloader/app/structs/VolumeEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEntityLocomotion_DEFINED
struct VolumeEntityLocomotion__Class;
struct VolumeEntityLocomotion {
    struct VolumeEntityLocomotion__Class* klass;
    MonitorData* monitor;
    struct VolumeEntityLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEntityLocomotion_FWDDECL)
#define IL2CPP_STRUCT_VolumeEntityLocomotion_FWDDECL
#include <Modloader/app/structs/VolumeEntityLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEntityLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEntityLocomotion_FWDDECL)
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
