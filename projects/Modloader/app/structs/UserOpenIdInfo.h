#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserOpenIdInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserOpenIdInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserOpenIdInfo_DEFINED)
#include <Modloader/app/structs/UserOpenIdInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserOpenIdInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserOpenIdInfo_DEFINED
struct UserOpenIdInfo__Class;
struct UserOpenIdInfo {
    struct UserOpenIdInfo__Class* klass;
    MonitorData* monitor;
    struct UserOpenIdInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserOpenIdInfo_FWDDECL)
#define IL2CPP_STRUCT_UserOpenIdInfo_FWDDECL
#include <Modloader/app/structs/UserOpenIdInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserOpenIdInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserOpenIdInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserOpenIdInfo_FWDDECL)
#include <Modloader/app/structs/UserOpenIdInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserOpenIdInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
