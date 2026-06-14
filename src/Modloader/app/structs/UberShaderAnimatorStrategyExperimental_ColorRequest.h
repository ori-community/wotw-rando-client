#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_UberShaderProperty_Color__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_DEFINED
struct UberShaderAnimatorStrategyExperimental_ColorRequest {
    struct Color DesiredValue;
    float Weight;
    UberShaderProperty_Color__Enum Property;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_FWDDECL)
#define IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderAnimatorStrategyExperimental_ColorRequest_FWDDECL)
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
