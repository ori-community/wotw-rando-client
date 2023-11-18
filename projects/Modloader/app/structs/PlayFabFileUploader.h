#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabFileUploader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabFileUploader_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabFileUploader_DEFINED)
#include <Modloader/app/structs/PlayFabFileUploader__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabFileUploader__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabFileUploader_DEFINED
struct PlayFabFileUploader__Class;
struct PlayFabFileUploader {
    struct PlayFabFileUploader__Class* klass;
    MonitorData* monitor;
    struct PlayFabFileUploader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabFileUploader_FWDDECL)
#define IL2CPP_STRUCT_PlayFabFileUploader_FWDDECL
#include <Modloader/app/structs/PlayFabFileUploader__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabFileUploader_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabFileUploader_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabFileUploader_FWDDECL)
#include <Modloader/app/structs/PlayFabFileUploader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabFileUploader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
