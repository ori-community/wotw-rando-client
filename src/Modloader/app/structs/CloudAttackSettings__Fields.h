#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CloudAttackSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CloudAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CloudAttackSettings__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CloudAttackSettings__Fields_DEFINED
struct DamageOwner;
struct CloudAttackSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct DamageOwner* DamageOwner;
    float Damage;
    float KickbackForce;
    float Radius;
    DamageWeight__Enum DamageWeight;

    struct Color DebugColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CloudAttackSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_CloudAttackSettings__Fields_FWDDECL
#include <Modloader/app/structs/DamageOwner.h>
#endif
#undef IL2CPP_STRUCT_CloudAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CloudAttackSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CloudAttackSettings__Fields_FWDDECL)
#include <Modloader/app/structs/CloudAttackSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CloudAttackSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
