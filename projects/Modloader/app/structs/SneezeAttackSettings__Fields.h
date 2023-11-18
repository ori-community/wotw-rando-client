#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeAttackSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeAttackSettings__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_SneezeAttackSettings__Fields_DEFINED
struct SneezeAttackSettings__Fields {
    struct MonoBehaviour__Fields _;
    int32_t ProjectileDamage;
    DamageWeight__Enum DamageWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeAttackSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeAttackSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SneezeAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeAttackSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeAttackSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeAttackSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeAttackSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
