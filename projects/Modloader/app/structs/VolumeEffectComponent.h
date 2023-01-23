#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffectComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffectComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectComponent_DEFINED)
#include <Modloader/app/structs/VolumeEffectComponent__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEffectComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffectComponent_DEFINED
struct VolumeEffectComponent__Class;
struct VolumeEffectComponent {
    struct VolumeEffectComponent__Class* klass;
    MonitorData* monitor;
    struct VolumeEffectComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffectComponent_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffectComponent_FWDDECL
#include <Modloader/app/structs/VolumeEffectComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffectComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectComponent_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffectComponent_FWDDECL)
#include <Modloader/app/structs/VolumeEffectComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffectComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
