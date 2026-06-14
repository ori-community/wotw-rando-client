#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InverseKinematicsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InverseKinematicsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsSettings_DEFINED)
#include <Modloader/app/structs/InverseKinematicsSettings__Fields.h>
#if defined(IL2CPP_STRUCT_InverseKinematicsSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_InverseKinematicsSettings_DEFINED
struct InverseKinematicsSettings__Class;
struct InverseKinematicsSettings {
    struct InverseKinematicsSettings__Class* klass;
    MonitorData* monitor;
    struct InverseKinematicsSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InverseKinematicsSettings_FWDDECL)
#define IL2CPP_STRUCT_InverseKinematicsSettings_FWDDECL
#include <Modloader/app/structs/InverseKinematicsSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_InverseKinematicsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsSettings_DEFINED) && !defined(IL2CPP_STRUCT_InverseKinematicsSettings_FWDDECL)
#include <Modloader/app/structs/InverseKinematicsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InverseKinematicsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
