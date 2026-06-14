#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoDamageCollider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoDamageCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoDamageCollider__Fields_DEFINED)
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageTypeMode__Enum.h>
#include <Modloader/app/structs/AutoDamageCollider_AutoDamageValueMode__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AutoDamageCollider_AutoDamageValueMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_GameWorldAreaID__Enum_DEFINED) && defined(IL2CPP_STRUCT_AutoDamageCollider_AutoDamageTypeMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_AutoDamageCollider__Fields_DEFINED
struct DamageType__Enum__Array;
struct HashSet_1_UnityEngine_GameObject_;
struct List_1_AutoDamageCollider_AutoDamageColliderEntry_;
struct AutoDamageCollider__Fields {
    struct MonoBehaviour__Fields _;
    struct DamageType__Enum__Array* m_damageTypeFilter;
    struct HashSet_1_UnityEngine_GameObject_* Children;
    AutoDamageCollider_AutoDamageValueMode__Enum DamageMode;

    GameWorldAreaID__Enum ManuallySetArea;

    bool PlayerOnly;
    AutoDamageCollider_AutoDamageTypeMode__Enum TypeMode;

    DamageType__Enum DamageType;

    struct List_1_AutoDamageCollider_AutoDamageColliderEntry_* m_damageDealers;
    int32_t m_childrenCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoDamageCollider__Fields_FWDDECL)
#define IL2CPP_STRUCT_AutoDamageCollider__Fields_FWDDECL
#include <Modloader/app/structs/DamageType__Enum__Array.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_AutoDamageCollider_AutoDamageColliderEntry_.h>
#endif
#undef IL2CPP_STRUCT_AutoDamageCollider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoDamageCollider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AutoDamageCollider__Fields_FWDDECL)
#include <Modloader/app/structs/AutoDamageCollider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoDamageCollider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
