#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FilterBoundsMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FilterBoundsMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterBoundsMode__Enum_DEFINED)
#define IL2CPP_STRUCT_FilterBoundsMode__Enum_DEFINED
enum class FilterBoundsMode__Enum : int32_t {
    Off = 0x00000000,
    Intersect = 0x00000001,
    Contains = 0x00000002,
    InverseIntersect = 0x00000003,
    InverseContains = 0x00000004,
    DepthSlice = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_FilterBoundsMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_FilterBoundsMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FilterBoundsMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FilterBoundsMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FilterBoundsMode__Enum_FWDDECL)
#include <Modloader/app/structs/FilterBoundsMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FilterBoundsMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
