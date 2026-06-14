#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpDataStream__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpDataStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpDataStream__Fields_DEFINED)
#include <Modloader/app/structs/Stream__Fields.h>
#if defined(IL2CPP_STRUCT_Stream__Fields_DEFINED)
#define IL2CPP_STRUCT_FtpDataStream__Fields_DEFINED
struct FtpWebRequest;
struct Stream;
struct FtpDataStream__Fields {
    struct Stream__Fields _;
    struct FtpWebRequest* request;
    struct Stream* networkStream;
    bool disposed;
    bool isRead;
    int32_t totalRead;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpDataStream__Fields_FWDDECL)
#define IL2CPP_STRUCT_FtpDataStream__Fields_FWDDECL
#include <Modloader/app/structs/FtpWebRequest.h>
#include <Modloader/app/structs/Stream.h>
#endif
#undef IL2CPP_STRUCT_FtpDataStream__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpDataStream__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FtpDataStream__Fields_FWDDECL)
#include <Modloader/app/structs/FtpDataStream__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpDataStream__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
