#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CGameID_EGameIDType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CGameID_EGameIDType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CGameID_EGameIDType__Enum_DEFINED)
#define IL2CPP_STRUCT_CGameID_EGameIDType__Enum_DEFINED
enum class CGameID_EGameIDType__Enum : int32_t {
    k_EGameIDTypeApp = 0x00000000,
    k_EGameIDTypeGameMod = 0x00000001,
    k_EGameIDTypeShortcut = 0x00000002,
    k_EGameIDTypeP2P = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_CGameID_EGameIDType__Enum_FWDDECL)
#define IL2CPP_STRUCT_CGameID_EGameIDType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CGameID_EGameIDType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CGameID_EGameIDType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CGameID_EGameIDType__Enum_FWDDECL)
#include <Modloader/app/structs/CGameID_EGameIDType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CGameID_EGameIDType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
