#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EAppType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EAppType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EAppType__Enum_DEFINED)
#define IL2CPP_STRUCT_EAppType__Enum_DEFINED
enum class EAppType__Enum : int32_t {
    k_EAppType_Invalid = 0x00000000,
    k_EAppType_Game = 0x00000001,
    k_EAppType_Application = 0x00000002,
    k_EAppType_Tool = 0x00000004,
    k_EAppType_Demo = 0x00000008,
    k_EAppType_Media_DEPRECATED = 0x00000010,
    k_EAppType_DLC = 0x00000020,
    k_EAppType_Guide = 0x00000040,
    k_EAppType_Driver = 0x00000080,
    k_EAppType_Config = 0x00000100,
    k_EAppType_Hardware = 0x00000200,
    k_EAppType_Franchise = 0x00000400,
    k_EAppType_Video = 0x00000800,
    k_EAppType_Plugin = 0x00001000,
    k_EAppType_Music = 0x00002000,
    k_EAppType_Series = 0x00004000,
    k_EAppType_Comic = 0x00008000,
    k_EAppType_Beta = 0x00010000,
    k_EAppType_Shortcut = 0x40000000,
    k_EAppType_DepotOnly = -2147483647,
};
#endif
#if !defined(IL2CPP_STRUCT_EAppType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EAppType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EAppType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EAppType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EAppType__Enum_FWDDECL)
#include <Modloader/app/structs/EAppType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EAppType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
