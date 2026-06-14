#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EPlayerResult_t__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EPlayerResult_t__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EPlayerResult_t__Enum_DEFINED)
#define IL2CPP_STRUCT_EPlayerResult_t__Enum_DEFINED
enum class EPlayerResult_t__Enum : int32_t {
    k_EPlayerResultFailedToConnect = 0x00000001,
    k_EPlayerResultAbandoned = 0x00000002,
    k_EPlayerResultKicked = 0x00000003,
    k_EPlayerResultIncomplete = 0x00000004,
    k_EPlayerResultCompleted = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_EPlayerResult_t__Enum_FWDDECL)
#define IL2CPP_STRUCT_EPlayerResult_t__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EPlayerResult_t__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EPlayerResult_t__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EPlayerResult_t__Enum_FWDDECL)
#include <Modloader/app/structs/EPlayerResult_t__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EPlayerResult_t__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
