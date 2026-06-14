#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_DEFINED)
#define IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_DEFINED
enum class EGameSearchErrorCode_t__Enum : int32_t {
    k_EGameSearchErrorCode_OK = 0x00000001,
    k_EGameSearchErrorCode_Failed_Search_Already_In_Progress = 0x00000002,
    k_EGameSearchErrorCode_Failed_No_Search_In_Progress = 0x00000003,
    k_EGameSearchErrorCode_Failed_Not_Lobby_Leader = 0x00000004,
    k_EGameSearchErrorCode_Failed_No_Host_Available = 0x00000005,
    k_EGameSearchErrorCode_Failed_Search_Params_Invalid = 0x00000006,
    k_EGameSearchErrorCode_Failed_Offline = 0x00000007,
    k_EGameSearchErrorCode_Failed_NotAuthorized = 0x00000008,
    k_EGameSearchErrorCode_Failed_Unknown_Error = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_FWDDECL)
#define IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EGameSearchErrorCode_t__Enum_FWDDECL)
#include <Modloader/app/structs/EGameSearchErrorCode_t__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EGameSearchErrorCode_t__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
