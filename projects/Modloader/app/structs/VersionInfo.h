#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VersionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VersionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_VersionInfo_DEFINED)
#include <Modloader/app/structs/VersionInfo__Fields.h>
#if defined(IL2CPP_STRUCT_VersionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_VersionInfo_DEFINED
struct VersionInfo__Class;
struct VersionInfo {
    struct VersionInfo__Class* klass;
    MonitorData* monitor;
    struct VersionInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VersionInfo_FWDDECL)
#define IL2CPP_STRUCT_VersionInfo_FWDDECL
#include <Modloader/app/structs/VersionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_VersionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_VersionInfo_DEFINED) && !defined(IL2CPP_STRUCT_VersionInfo_FWDDECL)
#include <Modloader/app/structs/VersionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VersionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
