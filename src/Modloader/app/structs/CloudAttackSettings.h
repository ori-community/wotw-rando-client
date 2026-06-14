#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CloudAttackSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CloudAttackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CloudAttackSettings_DEFINED)
#include <Modloader/app/structs/CloudAttackSettings__Fields.h>
#if defined(IL2CPP_STRUCT_CloudAttackSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CloudAttackSettings_DEFINED
struct CloudAttackSettings__Class;
struct CloudAttackSettings {
    struct CloudAttackSettings__Class* klass;
    MonitorData* monitor;
    struct CloudAttackSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CloudAttackSettings_FWDDECL)
#define IL2CPP_STRUCT_CloudAttackSettings_FWDDECL
#include <Modloader/app/structs/CloudAttackSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CloudAttackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CloudAttackSettings_DEFINED) && !defined(IL2CPP_STRUCT_CloudAttackSettings_FWDDECL)
#include <Modloader/app/structs/CloudAttackSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CloudAttackSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
