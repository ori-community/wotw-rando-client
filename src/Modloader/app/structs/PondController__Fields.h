#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PondController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PondController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PondController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PondController__Fields_DEFINED
struct SpriteAnimator;
struct TextureAnimation;
struct GameObject;
struct PondController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpriteAnimator* EscapePondSpriteAnimator;
    struct TextureAnimation* EscapePondAnimation;
    struct GameObject* BabySein;
    struct GameObject* BabySeinDeathEffect;
    float DeathEffectDuration;
    float m_deathEffectTimer;
    struct GameObject* m_deathEffect;
    bool m_wasDeathEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PondController__Fields_FWDDECL)
#define IL2CPP_STRUCT_PondController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#undef IL2CPP_STRUCT_PondController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PondController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PondController__Fields_FWDDECL)
#include <Modloader/app/structs/PondController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PondController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
