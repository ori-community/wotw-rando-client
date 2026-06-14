#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabFileDownloader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabFileDownloader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabFileDownloader__Fields_DEFINED)
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum.h>
#if defined(IL2CPP_STRUCT_RaceDataLeaderBoardType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabFileDownloader__Fields_DEFINED
struct String;
struct TaskCompletionSource_1_System_Byte_;
struct __declspec(align(8)) PlayFabFileDownloader__Fields {
    struct String* m_ownerId;
    struct String* m_fileName;
    RaceDataLeaderBoardType__Enum m_data;

    int32_t m_maxSize;
    struct TaskCompletionSource_1_System_Byte_* m_taskCompletionSource;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabFileDownloader__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabFileDownloader__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Byte_.h>
#endif
#undef IL2CPP_STRUCT_PlayFabFileDownloader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabFileDownloader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabFileDownloader__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabFileDownloader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabFileDownloader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
