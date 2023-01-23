#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalService_DeviceInfoArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalService_DeviceInfoArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_DeviceInfoArgs_DEFINED)
#define IL2CPP_STRUCT_XalService_DeviceInfoArgs_DEFINED
struct String;
struct XalService_DeviceInfoArgs {
    struct String* DeviceType;
    struct String* OsVersion;
    struct String* DeviceId;
};
#endif
#if !defined(IL2CPP_STRUCT_XalService_DeviceInfoArgs_FWDDECL)
#define IL2CPP_STRUCT_XalService_DeviceInfoArgs_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XalService_DeviceInfoArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_DeviceInfoArgs_DEFINED) && !defined(IL2CPP_STRUCT_XalService_DeviceInfoArgs_FWDDECL)
#include <Modloader/app/structs/XalService_DeviceInfoArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalService_DeviceInfoArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
