#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponAnimationPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponAnimationPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponAnimationPostprocess_DEFINED)
#include <Modloader/app/structs/WeaponAnimationPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponAnimationPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponAnimationPostprocess_DEFINED
struct WeaponAnimationPostprocess__Class;
struct WeaponAnimationPostprocess {
    struct WeaponAnimationPostprocess__Class* klass;
    MonitorData* monitor;
    struct WeaponAnimationPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponAnimationPostprocess_FWDDECL)
#define IL2CPP_STRUCT_WeaponAnimationPostprocess_FWDDECL
#include <Modloader/app/structs/WeaponAnimationPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponAnimationPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponAnimationPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_WeaponAnimationPostprocess_FWDDECL)
#include <Modloader/app/structs/WeaponAnimationPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponAnimationPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
