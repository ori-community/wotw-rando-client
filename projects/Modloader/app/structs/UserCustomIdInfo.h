#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserCustomIdInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserCustomIdInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserCustomIdInfo_DEFINED)
#include <Modloader/app/structs/UserCustomIdInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserCustomIdInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserCustomIdInfo_DEFINED
struct UserCustomIdInfo__Class;
struct UserCustomIdInfo {
    struct UserCustomIdInfo__Class* klass;
    MonitorData* monitor;
    struct UserCustomIdInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserCustomIdInfo_FWDDECL)
#define IL2CPP_STRUCT_UserCustomIdInfo_FWDDECL
#include <Modloader/app/structs/UserCustomIdInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserCustomIdInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserCustomIdInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserCustomIdInfo_FWDDECL)
#include <Modloader/app/structs/UserCustomIdInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserCustomIdInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
