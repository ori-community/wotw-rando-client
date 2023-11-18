#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeekerSlugShootingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeekerSlugShootingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeekerSlugShootingState__Fields_DEFINED)
#include <Modloader/app/structs/SlugState__Fields.h>
#if defined(IL2CPP_STRUCT_SlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeekerSlugShootingState__Fields_DEFINED
struct SlugDirectionalAnimationPicker;
struct GameObject;
struct SoundSource;
struct SeekerSlugShootingState__Fields {
    struct SlugState__Fields _;
    struct SlugDirectionalAnimationPicker* m_animation;
    struct GameObject* m_spikePrefab;
    struct SoundSource* m_shootingSound;
    float m_numberOfShots;
    float m_delayBetweenShots;
    float m_timeSinceLastShot;
    int32_t m_shotCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeekerSlugShootingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeekerSlugShootingState__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SlugDirectionalAnimationPicker.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_SeekerSlugShootingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeekerSlugShootingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeekerSlugShootingState__Fields_FWDDECL)
#include <Modloader/app/structs/SeekerSlugShootingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeekerSlugShootingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
