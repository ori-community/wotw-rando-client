#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpWebResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpWebResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebResponse_DEFINED)
#include <Modloader/app/structs/FtpWebResponse__Fields.h>
#if defined(IL2CPP_STRUCT_FtpWebResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_FtpWebResponse_DEFINED
struct FtpWebResponse__Class;
struct FtpWebResponse {
    struct FtpWebResponse__Class* klass;
    MonitorData* monitor;
    struct FtpWebResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpWebResponse_FWDDECL)
#define IL2CPP_STRUCT_FtpWebResponse_FWDDECL
#include <Modloader/app/structs/FtpWebResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_FtpWebResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebResponse_DEFINED) && !defined(IL2CPP_STRUCT_FtpWebResponse_FWDDECL)
#include <Modloader/app/structs/FtpWebResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpWebResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
