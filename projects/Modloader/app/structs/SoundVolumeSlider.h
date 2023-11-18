#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundVolumeSlider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundVolumeSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundVolumeSlider_DEFINED)
#include <Modloader/app/structs/SoundVolumeSlider__Fields.h>
#if defined(IL2CPP_STRUCT_SoundVolumeSlider__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundVolumeSlider_DEFINED
struct SoundVolumeSlider__Class;
struct SoundVolumeSlider {
    struct SoundVolumeSlider__Class* klass;
    MonitorData* monitor;
    struct SoundVolumeSlider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundVolumeSlider_FWDDECL)
#define IL2CPP_STRUCT_SoundVolumeSlider_FWDDECL
#include <Modloader/app/structs/SoundVolumeSlider__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundVolumeSlider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundVolumeSlider_DEFINED) && !defined(IL2CPP_STRUCT_SoundVolumeSlider_FWDDECL)
#include <Modloader/app/structs/SoundVolumeSlider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundVolumeSlider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
