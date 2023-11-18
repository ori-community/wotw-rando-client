#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicVolumeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicVolumeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicVolumeProvider_DEFINED)
#include <Modloader/app/structs/MusicVolumeProvider__Fields.h>
#if defined(IL2CPP_STRUCT_MusicVolumeProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_MusicVolumeProvider_DEFINED
struct MusicVolumeProvider__Class;
struct MusicVolumeProvider {
    struct MusicVolumeProvider__Class* klass;
    MonitorData* monitor;
    struct MusicVolumeProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicVolumeProvider_FWDDECL)
#define IL2CPP_STRUCT_MusicVolumeProvider_FWDDECL
#include <Modloader/app/structs/MusicVolumeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_MusicVolumeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicVolumeProvider_DEFINED) && !defined(IL2CPP_STRUCT_MusicVolumeProvider_FWDDECL)
#include <Modloader/app/structs/MusicVolumeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicVolumeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
