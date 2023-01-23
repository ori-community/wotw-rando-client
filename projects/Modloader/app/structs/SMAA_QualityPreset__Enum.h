#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_QualityPreset__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_QualityPreset__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_QualityPreset__Enum_DEFINED)
#define IL2CPP_STRUCT_SMAA_QualityPreset__Enum_DEFINED
enum class SMAA_QualityPreset__Enum : int32_t {
    Low = 0x00000000,
    Medium = 0x00000001,
    High = 0x00000002,
    Ultra = 0x00000003,
    Custom = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_SMAA_QualityPreset__Enum_FWDDECL)
#define IL2CPP_STRUCT_SMAA_QualityPreset__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SMAA_QualityPreset__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_QualityPreset__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_QualityPreset__Enum_FWDDECL)
#include <Modloader/app/structs/SMAA_QualityPreset__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_QualityPreset__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
