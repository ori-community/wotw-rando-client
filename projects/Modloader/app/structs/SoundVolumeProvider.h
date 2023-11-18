#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundVolumeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundVolumeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundVolumeProvider_DEFINED)
#include <Modloader/app/structs/SoundVolumeProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SoundVolumeProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundVolumeProvider_DEFINED
struct SoundVolumeProvider__Class;
struct SoundVolumeProvider {
    struct SoundVolumeProvider__Class* klass;
    MonitorData* monitor;
    struct SoundVolumeProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundVolumeProvider_FWDDECL)
#define IL2CPP_STRUCT_SoundVolumeProvider_FWDDECL
#include <Modloader/app/structs/SoundVolumeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundVolumeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundVolumeProvider_DEFINED) && !defined(IL2CPP_STRUCT_SoundVolumeProvider_FWDDECL)
#include <Modloader/app/structs/SoundVolumeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundVolumeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
