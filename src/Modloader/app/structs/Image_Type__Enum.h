#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Image_Type__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Image_Type__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Image_Type__Enum_DEFINED)
#define IL2CPP_STRUCT_Image_Type__Enum_DEFINED
enum class Image_Type__Enum : int32_t {
    Simple = 0x00000000,
    Sliced = 0x00000001,
    Tiled = 0x00000002,
    Filled = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_Image_Type__Enum_FWDDECL)
#define IL2CPP_STRUCT_Image_Type__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Image_Type__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Image_Type__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Image_Type__Enum_FWDDECL)
#include <Modloader/app/structs/Image_Type__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Image_Type__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
