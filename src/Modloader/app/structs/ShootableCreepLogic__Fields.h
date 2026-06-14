#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootableCreepLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootableCreepLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootableCreepLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootableCreepLogic__Fields_DEFINED
struct DynamicDataResolver;
struct ShootableCreepAnimator;
struct MoonReference_1_IGenericUberState_;
struct Vitals;
struct OrbSpawner;
struct GameObject;
struct BoxCollider;
struct IUberState__Array;
struct ShootableCreepLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct ShootableCreepAnimator* Animator;
    struct MoonReference_1_IGenericUberState_* State;
    struct Vitals* Vitals;
    struct OrbSpawner* OrbSpawner;
    struct GameObject* DisableOnCreepDestroyed;
    struct BoxCollider* Hitbox;
    bool m_state;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootableCreepLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootableCreepLogic__Fields_FWDDECL
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/ShootableCreepAnimator.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_ShootableCreepLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootableCreepLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootableCreepLogic__Fields_FWDDECL)
#include <Modloader/app/structs/ShootableCreepLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootableCreepLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
