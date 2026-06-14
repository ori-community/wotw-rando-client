#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CarryableRigidBody__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CarryableRigidBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CarryableRigidBody__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CarryableRigidBody__Fields_DEFINED
struct Varying2DSoundProvider;
struct ActionMethod;
struct SoundSource;
struct GameObject;
struct MessageProvider;
struct Rigidbody;
struct Transform;
struct AnimationMetaDataDrivenTransform;
struct MessageBox;
struct Condition_1;
struct Action;
struct CarryableRigidBody__Fields {
    struct SaveSerialize__Fields _;
    struct Varying2DSoundProvider* OnPickUpSoundProvider;
    struct Varying2DSoundProvider* OnPutDownSoundProvider;
    struct Varying2DSoundProvider* OnDropSoundProvider;
    struct Varying2DSoundProvider* OnHitGroundSoundProvider;
    struct ActionMethod* OnPickupAction;
    struct ActionMethod* OnDropAction;
    struct ActionMethod* OnHitGroundAction;
    struct SoundSource* CarryingSound;
    struct SoundSource* NotCarryingSound;
    struct Vector3 RespawnPosition;
    float DragOnCollision;
    struct GameObject* DeathEffect;
    struct GameObject* RespawnEffect;
    struct MessageProvider* PickupMessage;
    struct Rigidbody* m_rigidbody;
    struct Transform* m_transform;
    struct AnimationMetaDataDrivenTransform* m_animationMetaDataDrivenTransform;
    struct MessageBox* m_message;
    float m_timeNotToShowMessage;
    bool m_isCarried;
    struct Condition_1* CanBeCarriedCondition;
    struct Action* OnDropEvent;
    bool FreezeWhenOffscreen;
    float m_timeLastSoundPlayed;
    bool DestroyOnDamage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CarryableRigidBody__Fields_FWDDECL)
#define IL2CPP_STRUCT_CarryableRigidBody__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/AnimationMetaDataDrivenTransform.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_CarryableRigidBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CarryableRigidBody__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CarryableRigidBody__Fields_FWDDECL)
#include <Modloader/app/structs/CarryableRigidBody__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CarryableRigidBody__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
