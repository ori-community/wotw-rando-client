#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/SoundAnimator_PlaybackModeType__Enum.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_SoundAnimator_PlaybackModeType__Enum_DEFINED)
#define IL2CPP_STRUCT_SoundAnimator__Fields_DEFINED
struct SoundProvider;
struct Transform;
struct GameObject;
struct SoundHost;
struct SoundPlayer;
struct SoundDescriptor;
struct SoundAnimator__Fields {
    struct BaseAnimator__Fields _;
    SoundAnimator_PlaybackModeType__Enum PlaybackMode;

    struct SoundProvider* SoundProvider;
    struct Transform* Target;
    float ClipLength;
    struct GameObject* SoundPreplayHandler;
    bool Loop;
    struct SoundHost* SoundHost;
    struct SoundPlayer* m_soundPlayer;
    struct SoundDescriptor* m_soundDescriptor;
    bool m_started;
    float m_previusTime;
    float m_length;
    float m_prevRecursiveCheckTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SoundAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SoundAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
