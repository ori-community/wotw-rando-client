#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/SoundAnimatorEntity_PlaybackModeType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SoundAnimatorEntity_PlaybackModeType__Enum_DEFINED)
#define IL2CPP_STRUCT_SoundAnimatorEntity__Fields_DEFINED
struct SoundProvider;
struct MoonReference_1_UnityEngine_Transform_;
struct SoundHost;
struct SoundPlayer;
struct SoundDescriptor;
struct SoundAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    SoundAnimatorEntity_PlaybackModeType__Enum PlaybackMode;

    struct SoundProvider* SoundProvider;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct SoundHost* SoundHost;
    float ClipLength;
    bool Loop;
    bool FireAndForget;
    float m_time;
    struct SoundPlayer* m_soundPlayer;
    struct SoundDescriptor* m_soundDescriptor;
    bool m_started;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SoundAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SoundAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
