#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) WaapiJsonProjectInfo_VersionInfo__Fields {
    int32_t build;
    struct String* displayName;
    int32_t major;
    int32_t minor;
    struct String* nickname;
    int32_t schema;
    int32_t year;
};
#endif
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_VersionInfo__Fields_FWDDECL)
#include <Modloader/app/structs/WaapiJsonProjectInfo_VersionInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiJsonProjectInfo_VersionInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
