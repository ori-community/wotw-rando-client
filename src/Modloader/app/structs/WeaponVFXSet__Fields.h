#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponVFXSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponVFXSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponVFXSet__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentType__Enum.h>
#if defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_WeaponVFXSet__Fields_DEFINED
struct List_1_MaterialVFXSizePair_;
struct __declspec(align(8)) WeaponVFXSet__Fields {
    EquipmentType__Enum Weapon;

    struct List_1_MaterialVFXSizePair_* Settings;
    float OffsetHitEffectToCenterDistance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponVFXSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponVFXSet__Fields_FWDDECL
#include <Modloader/app/structs/List_1_MaterialVFXSizePair_.h>
#endif
#undef IL2CPP_STRUCT_WeaponVFXSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponVFXSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponVFXSet__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponVFXSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponVFXSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
