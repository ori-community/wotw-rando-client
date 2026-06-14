#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserKongregateInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserKongregateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserKongregateInfo_DEFINED)
#include <Modloader/app/structs/UserKongregateInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserKongregateInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserKongregateInfo_DEFINED
struct UserKongregateInfo__Class;
struct UserKongregateInfo {
    struct UserKongregateInfo__Class* klass;
    MonitorData* monitor;
    struct UserKongregateInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserKongregateInfo_FWDDECL)
#define IL2CPP_STRUCT_UserKongregateInfo_FWDDECL
#include <Modloader/app/structs/UserKongregateInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserKongregateInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserKongregateInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserKongregateInfo_FWDDECL)
#include <Modloader/app/structs/UserKongregateInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserKongregateInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
