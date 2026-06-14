#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InverseKinematicsPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InverseKinematicsPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsPostprocess_DEFINED)
#include <Modloader/app/structs/InverseKinematicsPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_InverseKinematicsPostprocess_DEFINED
struct InverseKinematicsPostprocess__Class;
struct InverseKinematicsPostprocess {
    struct InverseKinematicsPostprocess__Class* klass;
    MonitorData* monitor;
    struct InverseKinematicsPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InverseKinematicsPostprocess_FWDDECL)
#define IL2CPP_STRUCT_InverseKinematicsPostprocess_FWDDECL
#include <Modloader/app/structs/InverseKinematicsPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_InverseKinematicsPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_InverseKinematicsPostprocess_FWDDECL)
#include <Modloader/app/structs/InverseKinematicsPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InverseKinematicsPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
