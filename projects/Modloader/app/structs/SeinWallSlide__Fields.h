#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWallSlide__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWallSlide__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallSlide__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinWallSlide_State__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinWallSlide_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_SeinWallSlide__Fields_DEFINED
struct MaterialBasedSeinEffectsMap;
struct SoundPlayer;
struct SeinWallSlide__Fields {
    struct CharacterState__Fields _;
    SeinWallSlide_State__Enum CurrentState;

    float GravityMultiplier;
    float InputLockDuration;
    float MaxFallSpeed;
    struct MaterialBasedSeinEffectsMap* SeinEffects;
    float WallSlideUpAnimationMinimiumSpeed;
    float m_inputLockTimeRemaining;
    struct SoundPlayer* m_wallSlideUpSound;
    struct WwiseEventSystem_SoundHandle m_wallSlideUpSoundhandle;
    float m_lastWallSlideDownSoundTime;
    float m_minimumSoundDelay;
    struct WwiseEventSystem_SoundHandle m_wallSlideDownHandle;
    struct ActiveAnimationHandle m_lastAnim;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWallSlide__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinWallSlide__Fields_FWDDECL
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/SoundPlayer.h>
#endif
#undef IL2CPP_STRUCT_SeinWallSlide__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallSlide__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinWallSlide__Fields_FWDDECL)
#include <Modloader/app/structs/SeinWallSlide__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWallSlide__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
