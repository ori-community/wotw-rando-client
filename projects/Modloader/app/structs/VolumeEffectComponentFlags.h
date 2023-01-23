#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffectComponentFlags_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffectComponentFlags_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectComponentFlags_DEFINED)
#include <Modloader/app/structs/VolumeEffectComponentFlags__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEffectComponentFlags__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffectComponentFlags_DEFINED
struct VolumeEffectComponentFlags__Class;
struct VolumeEffectComponentFlags {
    struct VolumeEffectComponentFlags__Class* klass;
    MonitorData* monitor;
    struct VolumeEffectComponentFlags__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffectComponentFlags_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffectComponentFlags_FWDDECL
#include <Modloader/app/structs/VolumeEffectComponentFlags__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffectComponentFlags_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectComponentFlags_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffectComponentFlags_FWDDECL)
#include <Modloader/app/structs/VolumeEffectComponentFlags.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffectComponentFlags.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
