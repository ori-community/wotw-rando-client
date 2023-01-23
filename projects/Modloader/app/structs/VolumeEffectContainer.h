#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffectContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffectContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectContainer_DEFINED)
#include <Modloader/app/structs/VolumeEffectContainer__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEffectContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffectContainer_DEFINED
struct VolumeEffectContainer__Class;
struct VolumeEffectContainer {
    struct VolumeEffectContainer__Class* klass;
    MonitorData* monitor;
    struct VolumeEffectContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffectContainer_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffectContainer_FWDDECL
#include <Modloader/app/structs/VolumeEffectContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffectContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectContainer_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffectContainer_FWDDECL)
#include <Modloader/app/structs/VolumeEffectContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffectContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
