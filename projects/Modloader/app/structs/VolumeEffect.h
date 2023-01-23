#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffect_DEFINED)
#include <Modloader/app/structs/VolumeEffect__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffect_DEFINED
struct VolumeEffect__Class;
struct VolumeEffect {
    struct VolumeEffect__Class* klass;
    MonitorData* monitor;
    struct VolumeEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffect_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffect_FWDDECL
#include <Modloader/app/structs/VolumeEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffect_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffect_FWDDECL)
#include <Modloader/app/structs/VolumeEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
