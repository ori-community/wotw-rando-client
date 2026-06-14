#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#if defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_DEFINED
struct MantisJumpAttackDamageDealer;
struct __declspec(align(8)) MantisJumpAttackSettings_Settings__Fields {
    struct MantisJumpAttackDamageDealer* Prefab;
    float Damage;
    DamageWeight__Enum DamageWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_FWDDECL
#include <Modloader/app/structs/MantisJumpAttackDamageDealer.h>
#endif
#undef IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MantisJumpAttackSettings_Settings__Fields_FWDDECL)
#include <Modloader/app/structs/MantisJumpAttackSettings_Settings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisJumpAttackSettings_Settings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
