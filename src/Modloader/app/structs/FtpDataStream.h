#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpDataStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpDataStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpDataStream_DEFINED)
#include <Modloader/app/structs/FtpDataStream__Fields.h>
#if defined(IL2CPP_STRUCT_FtpDataStream__Fields_DEFINED)
#define IL2CPP_STRUCT_FtpDataStream_DEFINED
struct FtpDataStream__Class;
struct FtpDataStream {
    struct FtpDataStream__Class* klass;
    MonitorData* monitor;
    struct FtpDataStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpDataStream_FWDDECL)
#define IL2CPP_STRUCT_FtpDataStream_FWDDECL
#include <Modloader/app/structs/FtpDataStream__Class.h>
#endif
#undef IL2CPP_STRUCT_FtpDataStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpDataStream_DEFINED) && !defined(IL2CPP_STRUCT_FtpDataStream_FWDDECL)
#include <Modloader/app/structs/FtpDataStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpDataStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
