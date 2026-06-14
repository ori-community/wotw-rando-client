#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_DEFINED
struct String;
struct __declspec(align(8)) WaapiJsonProjectInfo_ProjectInfoDirectories__Fields {
    struct String* authoring;
    struct String* bin;
    struct String* help;
    struct String* install;
    struct String* log;
    struct String* user;
};
#endif
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_ProjectInfoDirectories__Fields_FWDDECL)
#include <Modloader/app/structs/WaapiJsonProjectInfo_ProjectInfoDirectories__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiJsonProjectInfo_ProjectInfoDirectories__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
