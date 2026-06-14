#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_DEFINED)
#define IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_DEFINED
enum class ERemoteStoragePlatform__Enum : int32_t {
    k_ERemoteStoragePlatformNone = 0x00000000,
    k_ERemoteStoragePlatformWindows = 0x00000001,
    k_ERemoteStoragePlatformOSX = 0x00000002,
    k_ERemoteStoragePlatformPS3 = 0x00000004,
    k_ERemoteStoragePlatformLinux = 0x00000008,
    k_ERemoteStoragePlatformReserved2 = 0x00000010,
    k_ERemoteStoragePlatformAndroid = 0x00000020,
    k_ERemoteStoragePlatformIOS = 0x00000040,
    k_ERemoteStoragePlatformAll = -1,
};
#endif
#if !defined(IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_FWDDECL)
#define IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ERemoteStoragePlatform__Enum_FWDDECL)
#include <Modloader/app/structs/ERemoteStoragePlatform__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ERemoteStoragePlatform__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
