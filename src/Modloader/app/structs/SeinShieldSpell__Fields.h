#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinShieldSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinShieldSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinShieldSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinShieldSpell__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonAnimation;
struct GameObject;
struct SeinShieldSpell__Fields {
    struct CharacterState__Fields _;
    struct FloatAnimationParameter* AimAngle;
    struct MoonAnimation* Cast;
    struct MoonAnimation* Loop;
    struct GameObject* Shield;
    bool m_isCasting;
    float m_shieldAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinShieldSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinShieldSpell__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinShieldSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinShieldSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinShieldSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinShieldSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinShieldSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
