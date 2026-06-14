#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffectFlags_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffectFlags_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectFlags_DEFINED)
#include <Modloader/app/structs/VolumeEffectFlags__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEffectFlags__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffectFlags_DEFINED
struct VolumeEffectFlags__Class;
struct VolumeEffectFlags {
    struct VolumeEffectFlags__Class* klass;
    MonitorData* monitor;
    struct VolumeEffectFlags__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffectFlags_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffectFlags_FWDDECL
#include <Modloader/app/structs/VolumeEffectFlags__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffectFlags_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectFlags_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffectFlags_FWDDECL)
#include <Modloader/app/structs/VolumeEffectFlags.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffectFlags.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
