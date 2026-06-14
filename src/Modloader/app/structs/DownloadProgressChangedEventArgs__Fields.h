#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/ProgressChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ProgressChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_DEFINED
struct DownloadProgressChangedEventArgs__Fields {
    struct ProgressChangedEventArgs__Fields _;
    int64_t m_BytesReceived;
    int64_t m_TotalBytesToReceive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/DownloadProgressChangedEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadProgressChangedEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
