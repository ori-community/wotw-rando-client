#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserFacebookInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserFacebookInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserFacebookInfo_DEFINED)
#include <Modloader/app/structs/UserFacebookInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserFacebookInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserFacebookInfo_DEFINED
struct UserFacebookInfo__Class;
struct UserFacebookInfo {
    struct UserFacebookInfo__Class* klass;
    MonitorData* monitor;
    struct UserFacebookInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserFacebookInfo_FWDDECL)
#define IL2CPP_STRUCT_UserFacebookInfo_FWDDECL
#include <Modloader/app/structs/UserFacebookInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserFacebookInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserFacebookInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserFacebookInfo_FWDDECL)
#include <Modloader/app/structs/UserFacebookInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserFacebookInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
