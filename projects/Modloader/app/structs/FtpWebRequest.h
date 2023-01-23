#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpWebRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebRequest_DEFINED)
#include <Modloader/app/structs/FtpWebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_FtpWebRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_FtpWebRequest_DEFINED
struct FtpWebRequest__Class;
struct FtpWebRequest {
    struct FtpWebRequest__Class* klass;
    MonitorData* monitor;
    struct FtpWebRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpWebRequest_FWDDECL)
#define IL2CPP_STRUCT_FtpWebRequest_FWDDECL
#include <Modloader/app/structs/FtpWebRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_FtpWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebRequest_DEFINED) && !defined(IL2CPP_STRUCT_FtpWebRequest_FWDDECL)
#include <Modloader/app/structs/FtpWebRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpWebRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
