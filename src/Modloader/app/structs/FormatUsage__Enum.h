#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatUsage__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatUsage__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatUsage__Enum_DEFINED)
#define IL2CPP_STRUCT_FormatUsage__Enum_DEFINED
enum class FormatUsage__Enum : int32_t {
    Sample = 0x00000000,
    Linear = 0x00000001,
    Render = 0x00000003,
    Blend = 0x00000004,
    LoadStore = 0x00000008,
    MSAA2x = 0x00000009,
    MSAA4x = 0x0000000a,
    MSAA8x = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_FormatUsage__Enum_FWDDECL)
#define IL2CPP_STRUCT_FormatUsage__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FormatUsage__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatUsage__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FormatUsage__Enum_FWDDECL)
#include <Modloader/app/structs/FormatUsage__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatUsage__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
