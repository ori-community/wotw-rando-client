#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentInfo_DEFINED)
#include <Modloader/app/structs/EnvironmentInfo__Fields.h>
#if defined(IL2CPP_STRUCT_EnvironmentInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvironmentInfo_DEFINED
struct EnvironmentInfo__Class;
struct EnvironmentInfo {
    struct EnvironmentInfo__Class* klass;
    MonitorData* monitor;
    struct EnvironmentInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentInfo_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentInfo_FWDDECL
#include <Modloader/app/structs/EnvironmentInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentInfo_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentInfo_FWDDECL)
#include <Modloader/app/structs/EnvironmentInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
