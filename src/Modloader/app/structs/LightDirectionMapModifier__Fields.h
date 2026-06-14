#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightDirectionMapModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightDirectionMapModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapModifier__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_LightDirectionMapModifier__Fields_DEFINED
struct LightDirectionMapProperty;
struct UberShaderVector;
struct LightDirectionMapModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct LightDirectionMapProperty* LightDirectionMap;
    struct UberShaderVector* LightDirectionMapSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightDirectionMapModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightDirectionMapModifier__Fields_FWDDECL
#include <Modloader/app/structs/LightDirectionMapProperty.h>
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_LightDirectionMapModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightDirectionMapModifier__Fields_FWDDECL)
#include <Modloader/app/structs/LightDirectionMapModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightDirectionMapModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
