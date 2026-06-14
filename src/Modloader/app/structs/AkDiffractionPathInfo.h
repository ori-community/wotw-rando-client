#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkDiffractionPathInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkDiffractionPathInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkDiffractionPathInfo_DEFINED)
#include <Modloader/app/structs/AkDiffractionPathInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkDiffractionPathInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkDiffractionPathInfo_DEFINED
struct AkDiffractionPathInfo__Class;
struct AkDiffractionPathInfo {
    struct AkDiffractionPathInfo__Class* klass;
    MonitorData* monitor;
    struct AkDiffractionPathInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkDiffractionPathInfo_FWDDECL)
#define IL2CPP_STRUCT_AkDiffractionPathInfo_FWDDECL
#include <Modloader/app/structs/AkDiffractionPathInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkDiffractionPathInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkDiffractionPathInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkDiffractionPathInfo_FWDDECL)
#include <Modloader/app/structs/AkDiffractionPathInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkDiffractionPathInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
