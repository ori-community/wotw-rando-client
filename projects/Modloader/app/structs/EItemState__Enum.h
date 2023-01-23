#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EItemState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EItemState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EItemState__Enum_DEFINED)
#define IL2CPP_STRUCT_EItemState__Enum_DEFINED
enum class EItemState__Enum : int32_t {
    k_EItemStateNone = 0x00000000,
    k_EItemStateSubscribed = 0x00000001,
    k_EItemStateLegacyItem = 0x00000002,
    k_EItemStateInstalled = 0x00000004,
    k_EItemStateNeedsUpdate = 0x00000008,
    k_EItemStateDownloading = 0x00000010,
    k_EItemStateDownloadPending = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_EItemState__Enum_FWDDECL)
#define IL2CPP_STRUCT_EItemState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EItemState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EItemState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EItemState__Enum_FWDDECL)
#include <Modloader/app/structs/EItemState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EItemState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
