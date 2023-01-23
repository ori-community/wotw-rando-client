#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponSword_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponSword_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponSword_DEFINED)
#include <Modloader/app/structs/MeleeWeaponSword__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeWeaponSword__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponSword_DEFINED
struct MeleeWeaponSword__Class;
struct MeleeWeaponSword {
    struct MeleeWeaponSword__Class* klass;
    MonitorData* monitor;
    struct MeleeWeaponSword__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponSword_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponSword_FWDDECL
#include <Modloader/app/structs/MeleeWeaponSword__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponSword_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponSword_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponSword_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponSword.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponSword.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
