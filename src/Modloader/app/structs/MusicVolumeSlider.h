#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicVolumeSlider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicVolumeSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicVolumeSlider_DEFINED)
#include <Modloader/app/structs/MusicVolumeSlider__Fields.h>
#if defined(IL2CPP_STRUCT_MusicVolumeSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_MusicVolumeSlider_DEFINED
struct MusicVolumeSlider__Class;
struct MusicVolumeSlider {
    struct MusicVolumeSlider__Class* klass;
    MonitorData* monitor;
    struct MusicVolumeSlider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicVolumeSlider_FWDDECL)
#define IL2CPP_STRUCT_MusicVolumeSlider_FWDDECL
#include <Modloader/app/structs/MusicVolumeSlider__Class.h>
#endif
#undef IL2CPP_STRUCT_MusicVolumeSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicVolumeSlider_DEFINED) && !defined(IL2CPP_STRUCT_MusicVolumeSlider_FWDDECL)
#include <Modloader/app/structs/MusicVolumeSlider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicVolumeSlider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
