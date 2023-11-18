#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_DEFINED)
#define IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_DEFINED
enum class FtpWebRequest_RequestState__Enum : int32_t {
    Before = 0x00000000,
    Scheduled = 0x00000001,
    Connecting = 0x00000002,
    Authenticating = 0x00000003,
    OpeningData = 0x00000004,
    TransferInProgress = 0x00000005,
    Finished = 0x00000006,
    Aborted = 0x00000007,
    Error = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_FWDDECL)
#define IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_FWDDECL)
#include <Modloader/app/structs/FtpWebRequest_RequestState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpWebRequest_RequestState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
