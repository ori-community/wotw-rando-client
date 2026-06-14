#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentTintModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentTintModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentTintModifier__Fields_DEFINED)
#include <Modloader/app/structs/EnvironmentLight_Channel__Enum.h>
#include <Modloader/app/structs/EnvironmentShadingModifier__Fields.h>
#if defined(IL2CPP_STRUCT_EnvironmentShadingModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_EnvironmentLight_Channel__Enum_DEFINED)
#define IL2CPP_STRUCT_EnvironmentTintModifier__Fields_DEFINED
struct UberShaderFloat;
struct EnvironmentTintModifier__Fields {
    struct EnvironmentShadingModifier__Fields _;
    EnvironmentLight_Channel__Enum Channel;

    struct UberShaderFloat* TintStrength;
    int32_t m_envTintColorID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentTintModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentTintModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderFloat.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentTintModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentTintModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentTintModifier__Fields_FWDDECL)
#include <Modloader/app/structs/EnvironmentTintModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentTintModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
