#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative_DialogType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative_DialogType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_DialogType__Enum_DEFINED)
#define IL2CPP_STRUCT_BrowserNative_DialogType__Enum_DEFINED
enum class BrowserNative_DialogType__Enum : int32_t {
    DLT_HIDE = 0x00000000,
    DLT_ALERT = 0x00000001,
    DLT_CONFIRM = 0x00000002,
    DLT_PROMPT = 0x00000003,
    DLT_PAGE_UNLOAD = 0x00000004,
    DLT_PAGE_RELOAD = 0x00000005,
    DLT_GET_AUTH = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative_DialogType__Enum_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative_DialogType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BrowserNative_DialogType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_DialogType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative_DialogType__Enum_FWDDECL)
#include <Modloader/app/structs/BrowserNative_DialogType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative_DialogType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
