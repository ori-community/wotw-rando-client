#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoftCollider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoftCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftCollider__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SoftCollider__Fields_DEFINED
struct SphereCollider;
struct Rigidbody;
struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_;
struct Action_1_UnityEngine_Collider_;
struct SoftCollider__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 pushForce;
    float maxSpeed;
    struct SphereCollider* Collider;
    struct Rigidbody* Rigidbody;
    struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_* OnSoftCollisionEnter;
    struct Action_2_UnityEngine_Collider_UnityEngine_Vector2_* OnSoftCollisionStay;
    struct Action_1_UnityEngine_Collider_* OnSoftCollisionExit;
    struct Vector3 m_pushForce;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoftCollider__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoftCollider__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/Action_2_UnityEngine_Collider_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#endif
#undef IL2CPP_STRUCT_SoftCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftCollider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoftCollider__Fields_FWDDECL)
#include <Modloader/app/structs/SoftCollider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoftCollider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
