#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterGravityToGround__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterGravityToGround__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterGravityToGround__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterGravityToGround__Fields_DEFINED
struct Cart;
struct PlatformBehaviour;
struct Collider;
struct GravityToGroundSurface;
struct CharacterGravityToGround__Fields {
    struct CharacterState__Fields _;
    float RotateSpeed;
    float m_targetAngle;
    float m_angleIgnoreRange;
    float m_maxAngleDiff;
    struct Cart* m_cart;
    struct PlatformBehaviour* PlatformBehaviour;
    struct Collider* m_groundCollider;
    struct GravityToGroundSurface* m_gravityToGroundSurface;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterGravityToGround__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterGravityToGround__Fields_FWDDECL
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GravityToGroundSurface.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CharacterGravityToGround__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterGravityToGround__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterGravityToGround__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterGravityToGround__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterGravityToGround__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
