#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaHealLanternLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaHealLanternLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaHealLanternLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LianaHealLanternLogic__Fields_DEFINED
struct IPhysicsUpdateHandler;
struct Vitals;
struct LianaHealLanternAnimator;
struct Rigidbody;
struct OrbSpawner;
struct FixedJoint;
struct LianaHealLanternLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct IPhysicsUpdateHandler* LineUpdateHandler;
    struct Vitals* Vitals;
    struct LianaHealLanternAnimator* Animator;
    struct Rigidbody* BulpLogicRigidbody;
    struct OrbSpawner* OrbSpawner;
    float RespawnTime;
    float m_respawnTimer;
    struct FixedJoint* m_bulbPhysicsFixedJoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LianaHealLanternLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_LianaHealLanternLogic__Fields_FWDDECL
#include <Modloader/app/structs/FixedJoint.h>
#include <Modloader/app/structs/IPhysicsUpdateHandler.h>
#include <Modloader/app/structs/LianaHealLanternAnimator.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_LianaHealLanternLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaHealLanternLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LianaHealLanternLogic__Fields_FWDDECL)
#include <Modloader/app/structs/LianaHealLanternLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaHealLanternLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
