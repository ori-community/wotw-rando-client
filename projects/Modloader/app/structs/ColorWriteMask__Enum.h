#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorWriteMask__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorWriteMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorWriteMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ColorWriteMask__Enum_DEFINED
enum class ColorWriteMask__Enum : int32_t {
    Alpha = 0x00000001,
    Blue = 0x00000002,
    Green = 0x00000004,
    Red = 0x00000008,
    All = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_ColorWriteMask__Enum_FWDDECL)
#define IL2CPP_STRUCT_ColorWriteMask__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ColorWriteMask__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorWriteMask__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ColorWriteMask__Enum_FWDDECL)
#include <Modloader/app/structs/ColorWriteMask__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorWriteMask__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
