#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEffectFieldFlags_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEffectFieldFlags_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectFieldFlags_DEFINED)
#include <Modloader/app/structs/VolumeEffectFieldFlags__Fields.h>
#if defined(IL2CPP_STRUCT_VolumeEffectFieldFlags__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumeEffectFieldFlags_DEFINED
struct VolumeEffectFieldFlags__Class;
struct VolumeEffectFieldFlags {
    struct VolumeEffectFieldFlags__Class* klass;
    MonitorData* monitor;
    struct VolumeEffectFieldFlags__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEffectFieldFlags_FWDDECL)
#define IL2CPP_STRUCT_VolumeEffectFieldFlags_FWDDECL
#include <Modloader/app/structs/VolumeEffectFieldFlags__Class.h>
#endif
#undef IL2CPP_STRUCT_VolumeEffectFieldFlags_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEffectFieldFlags_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEffectFieldFlags_FWDDECL)
#include <Modloader/app/structs/VolumeEffectFieldFlags.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEffectFieldFlags.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
