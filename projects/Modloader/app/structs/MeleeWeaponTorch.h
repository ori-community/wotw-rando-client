#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponTorch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponTorch_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponTorch_DEFINED)
#include <Modloader/app/structs/MeleeWeaponTorch__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeWeaponTorch__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponTorch_DEFINED
struct MeleeWeaponTorch__Class;
struct MeleeWeaponTorch {
    struct MeleeWeaponTorch__Class* klass;
    MonitorData* monitor;
    struct MeleeWeaponTorch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponTorch_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponTorch_FWDDECL
#include <Modloader/app/structs/MeleeWeaponTorch__Class.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponTorch_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponTorch_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponTorch_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponTorch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponTorch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
