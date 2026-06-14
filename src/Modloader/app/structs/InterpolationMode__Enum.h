#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InterpolationMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InterpolationMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpolationMode__Enum_DEFINED)
#define IL2CPP_STRUCT_InterpolationMode__Enum_DEFINED
enum class InterpolationMode__Enum : int32_t {
    None = 0x00000000,
    InOutCubic = 0x00000001,
    InOutQuintic = 0x00000002,
    InOutSine = 0x00000003,
    InQuintic = 0x00000004,
    InQuartic = 0x00000005,
    InCubic = 0x00000006,
    InQuadratic = 0x00000007,
    InElastic = 0x00000008,
    InElasticSmall = 0x00000009,
    InElasticBig = 0x0000000a,
    InSine = 0x0000000b,
    InBack = 0x0000000c,
    OutQuintic = 0x0000000d,
    OutQuartic = 0x0000000e,
    OutCubic = 0x0000000f,
    OutInCubic = 0x00000010,
    OutInQuartic = 0x00000011,
    OutElastic = 0x00000012,
    OutElasticSmall = 0x00000013,
    OutElasticBig = 0x00000014,
    OutSine = 0x00000015,
    OutBack = 0x00000016,
    OutBackCubic = 0x00000017,
    OutBackQuartic = 0x00000018,
    BackInCubic = 0x00000019,
    BackInQuartic = 0x0000001a,
};
#endif
#if !defined(IL2CPP_STRUCT_InterpolationMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_InterpolationMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InterpolationMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InterpolationMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InterpolationMode__Enum_FWDDECL)
#include <Modloader/app/structs/InterpolationMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InterpolationMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
