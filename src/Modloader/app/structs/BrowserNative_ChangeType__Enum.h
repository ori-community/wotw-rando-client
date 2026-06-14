#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_DEFINED)
#define IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_DEFINED
enum class BrowserNative_ChangeType__Enum : int32_t {
    CHT_CURSOR = 0x00000000,
    CHT_BROWSER_CLOSE = 0x00000001,
    CHT_FETCH_FINISHED = 0x00000002,
    CHT_FETCH_FAILED = 0x00000003,
    CHT_LOAD_FINISHED = 0x00000004,
    CHT_CERT_ERROR = 0x00000005,
    CHT_SAD_TAB = 0x00000006,
    CHT_DOWNLOAD_STARTED = 0x00000007,
    CHT_DOWNLOAD_STATUS = 0x00000008,
    CHT_FOCUSED_NODE = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative_ChangeType__Enum_FWDDECL)
#include <Modloader/app/structs/BrowserNative_ChangeType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative_ChangeType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
