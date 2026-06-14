#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserGoogleInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserGoogleInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserGoogleInfo_DEFINED)
#include <Modloader/app/structs/UserGoogleInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserGoogleInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserGoogleInfo_DEFINED
struct UserGoogleInfo__Class;
struct UserGoogleInfo {
    struct UserGoogleInfo__Class* klass;
    MonitorData* monitor;
    struct UserGoogleInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserGoogleInfo_FWDDECL)
#define IL2CPP_STRUCT_UserGoogleInfo_FWDDECL
#include <Modloader/app/structs/UserGoogleInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserGoogleInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserGoogleInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserGoogleInfo_FWDDECL)
#include <Modloader/app/structs/UserGoogleInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserGoogleInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
