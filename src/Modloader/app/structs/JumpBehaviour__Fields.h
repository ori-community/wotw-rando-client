#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_JumpBehaviour__Fields_DEFINED
struct MoonAnimation;
struct Locomotion;
struct ILocomotionTurningHandler;
struct JumpBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    float _TraversalSpeed_k__BackingField;
    float JumpHeight;
    struct MoonAnimation* JumpStart;
    struct MoonAnimation* Fall;
    int32_t AnimationPriority;
    struct Locomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    struct Vector2 m_jumpVelocity;
    float m_jumpTime;
    float m_fallTime;
    bool m_continuePlayingJump;
    bool m_falling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumpBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_JumpBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumpBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/JumpBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
