#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponHammer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponHammer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponHammer_DEFINED)
#include <Modloader/app/structs/MeleeWeaponHammer__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeWeaponHammer__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponHammer_DEFINED
struct MeleeWeaponHammer__Class;
struct MeleeWeaponHammer {
    struct MeleeWeaponHammer__Class* klass;
    MonitorData* monitor;
    struct MeleeWeaponHammer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponHammer_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponHammer_FWDDECL
#include <Modloader/app/structs/MeleeWeaponHammer__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponHammer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponHammer_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponHammer_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponHammer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponHammer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
