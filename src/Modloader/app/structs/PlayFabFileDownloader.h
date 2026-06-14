#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabFileDownloader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabFileDownloader_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabFileDownloader_DEFINED)
#include <Modloader/app/structs/PlayFabFileDownloader__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabFileDownloader__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabFileDownloader_DEFINED
struct PlayFabFileDownloader__Class;
struct PlayFabFileDownloader {
    struct PlayFabFileDownloader__Class* klass;
    MonitorData* monitor;
    struct PlayFabFileDownloader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabFileDownloader_FWDDECL)
#define IL2CPP_STRUCT_PlayFabFileDownloader_FWDDECL
#include <Modloader/app/structs/PlayFabFileDownloader__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabFileDownloader_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabFileDownloader_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabFileDownloader_FWDDECL)
#include <Modloader/app/structs/PlayFabFileDownloader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabFileDownloader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
