#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiJsonProjectInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_DEFINED)
#include <Modloader/app/structs/WaapiJsonProjectInfo__Fields.h>
#if defined(IL2CPP_STRUCT_WaapiJsonProjectInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_DEFINED
struct WaapiJsonProjectInfo__Class;
struct WaapiJsonProjectInfo {
    struct WaapiJsonProjectInfo__Class* klass;
    MonitorData* monitor;
    struct WaapiJsonProjectInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_FWDDECL)
#define IL2CPP_STRUCT_WaapiJsonProjectInfo_FWDDECL
#include <Modloader/app/structs/WaapiJsonProjectInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_WaapiJsonProjectInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_DEFINED) && !defined(IL2CPP_STRUCT_WaapiJsonProjectInfo_FWDDECL)
#include <Modloader/app/structs/WaapiJsonProjectInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiJsonProjectInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
