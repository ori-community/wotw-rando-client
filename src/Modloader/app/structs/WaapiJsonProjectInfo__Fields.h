#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_DEFINED
struct String;
struct WaapiJsonProjectInfo_ProjectInfoDirectories;
struct WaapiJsonProjectInfo_VersionInfo;
struct __declspec(align(8)) WaapiJsonProjectInfo__Fields {
    int32_t apiVersion;
    struct String* branch;
    struct String* configuration;
    struct String* copyright;
    struct WaapiJsonProjectInfo_ProjectInfoDirectories* directories;
    struct String* displayName;
    bool isCommandLine;
    struct String* platform;
    int32_t processId;
    struct String* processPath;
    struct WaapiJsonProjectInfo_VersionInfo* version;
};
#endif
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WaapiJsonProjectInfo_ProjectInfoDirectories.h>
#include <Modloader/app/structs/WaapiJsonProjectInfo_VersionInfo.h>
#endif
#undef IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_FWDDECL)
#include <Modloader/app/structs/WaapiJsonProjectInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiJsonProjectInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
