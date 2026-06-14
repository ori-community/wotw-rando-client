#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightType__Enum_DEFINED)
#define IL2CPP_STRUCT_LightType__Enum_DEFINED
enum class LightType__Enum : int32_t {
    Spot = 0x00000000,
    Directional = 0x00000001,
    Point = 0x00000002,
    Area = 0x00000003,
    Rectangle = 0x00000003,
    Disc = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_LightType__Enum_FWDDECL)
#define IL2CPP_STRUCT_LightType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LightType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LightType__Enum_FWDDECL)
#include <Modloader/app/structs/LightType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
