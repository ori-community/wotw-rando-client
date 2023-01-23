#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponTypeVFXSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponTypeVFXSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponTypeVFXSettings_DEFINED)
#include <Modloader/app/structs/WeaponTypeVFXSettings__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponTypeVFXSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponTypeVFXSettings_DEFINED
struct WeaponTypeVFXSettings__Class;
struct WeaponTypeVFXSettings {
    struct WeaponTypeVFXSettings__Class* klass;
    MonitorData* monitor;
    struct WeaponTypeVFXSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponTypeVFXSettings_FWDDECL)
#define IL2CPP_STRUCT_WeaponTypeVFXSettings_FWDDECL
#include <Modloader/app/structs/WeaponTypeVFXSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponTypeVFXSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponTypeVFXSettings_DEFINED) && !defined(IL2CPP_STRUCT_WeaponTypeVFXSettings_FWDDECL)
#include <Modloader/app/structs/WeaponTypeVFXSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponTypeVFXSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
