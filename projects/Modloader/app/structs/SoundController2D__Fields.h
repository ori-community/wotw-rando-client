#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundController2D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundController2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundController2D__Fields_DEFINED)
#include <Modloader/app/structs/AudioRolloffMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AudioRolloffMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SoundController2D__Fields_DEFINED
struct AudioSource;
struct Transform;
struct SoundController2D__Fields {
    struct MonoBehaviour__Fields _;
    float Volume;
    float MinDistance;
    float MaxDistance;
    AudioRolloffMode__Enum RolloffMode;

    struct AudioSource* m_audio;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundController2D__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundController2D__Fields_FWDDECL
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SoundController2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundController2D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundController2D__Fields_FWDDECL)
#include <Modloader/app/structs/SoundController2D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundController2D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
