#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RopePhysicsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RopePhysicsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopePhysicsSettings_DEFINED)
#include <Modloader/app/structs/RopePhysicsSettings__Fields.h>
#if defined(IL2CPP_STRUCT_RopePhysicsSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RopePhysicsSettings_DEFINED
struct RopePhysicsSettings__Class;
struct RopePhysicsSettings {
    struct RopePhysicsSettings__Class* klass;
    MonitorData* monitor;
    struct RopePhysicsSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RopePhysicsSettings_FWDDECL)
#define IL2CPP_STRUCT_RopePhysicsSettings_FWDDECL
#include <Modloader/app/structs/RopePhysicsSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_RopePhysicsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopePhysicsSettings_DEFINED) && !defined(IL2CPP_STRUCT_RopePhysicsSettings_FWDDECL)
#include <Modloader/app/structs/RopePhysicsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RopePhysicsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
