#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderAttackSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderAttackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderAttackSettings_DEFINED)
#include <Modloader/app/structs/SpiderAttackSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderAttackSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderAttackSettings_DEFINED
struct SpiderAttackSettings__Class;
struct SpiderAttackSettings {
    struct SpiderAttackSettings__Class* klass;
    MonitorData* monitor;
    struct SpiderAttackSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderAttackSettings_FWDDECL)
#define IL2CPP_STRUCT_SpiderAttackSettings_FWDDECL
#include <Modloader/app/structs/SpiderAttackSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderAttackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderAttackSettings_DEFINED) && !defined(IL2CPP_STRUCT_SpiderAttackSettings_FWDDECL)
#include <Modloader/app/structs/SpiderAttackSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderAttackSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
