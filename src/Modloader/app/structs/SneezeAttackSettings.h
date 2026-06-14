#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeAttackSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeAttackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeAttackSettings_DEFINED)
#include <Modloader/app/structs/SneezeAttackSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SneezeAttackSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SneezeAttackSettings_DEFINED
struct SneezeAttackSettings__Class;
struct SneezeAttackSettings {
    struct SneezeAttackSettings__Class* klass;
    MonitorData* monitor;
    struct SneezeAttackSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeAttackSettings_FWDDECL)
#define IL2CPP_STRUCT_SneezeAttackSettings_FWDDECL
#include <Modloader/app/structs/SneezeAttackSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SneezeAttackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeAttackSettings_DEFINED) && !defined(IL2CPP_STRUCT_SneezeAttackSettings_FWDDECL)
#include <Modloader/app/structs/SneezeAttackSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeAttackSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
