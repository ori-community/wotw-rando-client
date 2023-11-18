#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DealDamageAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DealDamageAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_DealDamageAction__Fields_DEFINED
struct GameObject;
struct Component_1__Array;
struct DealDamageAction__Fields {
    struct ActionMethod__Fields _;
    DamageType__Enum DamageType;

    float Amount;
    bool DamageAllEnemies;
    struct GameObject* Target;
    struct Component_1__Array* m_targetComponents;
    bool m_isPrewarmed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DealDamageAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_DealDamageAction__Fields_FWDDECL
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_DealDamageAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DealDamageAction__Fields_FWDDECL)
#include <Modloader/app/structs/DealDamageAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DealDamageAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
