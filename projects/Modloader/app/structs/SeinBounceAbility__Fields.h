#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBounceAbility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBounceAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBounceAbility__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBounceAbility__Fields_DEFINED
struct MoonAnimation;
struct BaseAnimator;
struct SeinBounceAbility__Fields {
    struct CharacterState__Fields _;
    struct MoonAnimation* Jump;
    struct BaseAnimator* AppearAnimator;
    float m_fallTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBounceAbility__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBounceAbility__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinBounceAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBounceAbility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBounceAbility__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBounceAbility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBounceAbility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
