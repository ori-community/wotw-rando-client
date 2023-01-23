#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserWindowsHelloInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserWindowsHelloInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserWindowsHelloInfo_DEFINED)
#include <Modloader/app/structs/UserWindowsHelloInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserWindowsHelloInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserWindowsHelloInfo_DEFINED
struct UserWindowsHelloInfo__Class;
struct UserWindowsHelloInfo {
    struct UserWindowsHelloInfo__Class* klass;
    MonitorData* monitor;
    struct UserWindowsHelloInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserWindowsHelloInfo_FWDDECL)
#define IL2CPP_STRUCT_UserWindowsHelloInfo_FWDDECL
#include <Modloader/app/structs/UserWindowsHelloInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserWindowsHelloInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserWindowsHelloInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserWindowsHelloInfo_FWDDECL)
#include <Modloader/app/structs/UserWindowsHelloInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserWindowsHelloInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
