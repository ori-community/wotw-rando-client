#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootingSpiderSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootingSpiderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpiderSettings_DEFINED)
#include <Modloader/app/structs/ShootingSpiderSettings__Fields.h>
#if defined(IL2CPP_STRUCT_ShootingSpiderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootingSpiderSettings_DEFINED
struct ShootingSpiderSettings__Class;
struct ShootingSpiderSettings {
    struct ShootingSpiderSettings__Class* klass;
    MonitorData* monitor;
    struct ShootingSpiderSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootingSpiderSettings_FWDDECL)
#define IL2CPP_STRUCT_ShootingSpiderSettings_FWDDECL
#include <Modloader/app/structs/ShootingSpiderSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ShootingSpiderSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpiderSettings_DEFINED) && !defined(IL2CPP_STRUCT_ShootingSpiderSettings_FWDDECL)
#include <Modloader/app/structs/ShootingSpiderSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootingSpiderSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
