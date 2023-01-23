#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserTitleInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserTitleInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserTitleInfo_DEFINED)
#include <Modloader/app/structs/UserTitleInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserTitleInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserTitleInfo_DEFINED
struct UserTitleInfo__Class;
struct UserTitleInfo {
    struct UserTitleInfo__Class* klass;
    MonitorData* monitor;
    struct UserTitleInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserTitleInfo_FWDDECL)
#define IL2CPP_STRUCT_UserTitleInfo_FWDDECL
#include <Modloader/app/structs/UserTitleInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserTitleInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserTitleInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserTitleInfo_FWDDECL)
#include <Modloader/app/structs/UserTitleInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserTitleInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
