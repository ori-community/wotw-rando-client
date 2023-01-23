#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeapon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeapon_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeapon_DEFINED)
#include <Modloader/app/structs/MeleeWeapon__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeWeapon_DEFINED
struct MeleeWeapon__Class;
struct MeleeWeapon {
    struct MeleeWeapon__Class* klass;
    MonitorData* monitor;
    struct MeleeWeapon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeapon_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeapon_FWDDECL
#include <Modloader/app/structs/MeleeWeapon__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeapon_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeapon_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeapon_FWDDECL)
#include <Modloader/app/structs/MeleeWeapon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeapon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
