#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpAsyncResult_DEFINED)
#include <Modloader/app/structs/FtpAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_FtpAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_FtpAsyncResult_DEFINED
struct FtpAsyncResult__Class;
struct FtpAsyncResult {
    struct FtpAsyncResult__Class* klass;
    MonitorData* monitor;
    struct FtpAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_FtpAsyncResult_FWDDECL
#include <Modloader/app/structs/FtpAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_FtpAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_FtpAsyncResult_FWDDECL)
#include <Modloader/app/structs/FtpAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
