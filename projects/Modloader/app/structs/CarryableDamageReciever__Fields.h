#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CarryableDamageReciever__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CarryableDamageReciever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CarryableDamageReciever__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CarryableDamageReciever__Fields_DEFINED
struct CarryableRigidBody;
struct HashSet_1_DamageType_;
struct CarryableDamageReciever__Fields {
    struct MonoBehaviour__Fields _;
    struct CarryableRigidBody* m_carryable;
    struct HashSet_1_DamageType_* m_damageTypes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CarryableDamageReciever__Fields_FWDDECL)
#define IL2CPP_STRUCT_CarryableDamageReciever__Fields_FWDDECL
#include <Modloader/app/structs/CarryableRigidBody.h>
#include <Modloader/app/structs/HashSet_1_DamageType_.h>
#endif
#undef IL2CPP_STRUCT_CarryableDamageReciever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CarryableDamageReciever__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CarryableDamageReciever__Fields_FWDDECL)
#include <Modloader/app/structs/CarryableDamageReciever__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CarryableDamageReciever__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
