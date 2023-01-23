#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_DEFINED)
#include <Modloader/app/structs/TurbulenceModifier__Fields.h>
#if defined(IL2CPP_STRUCT_TurbulenceModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_DEFINED
struct UberShaderVector;
struct TurbulenceTransparencyModifier__Fields {
    struct TurbulenceModifier__Fields _;
    struct UberShaderVector* LocalSettings;
    struct UberShaderVector* ScaleVarSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderVector.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceTransparencyModifier__Fields_FWDDECL)
#include <Modloader/app/structs/TurbulenceTransparencyModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceTransparencyModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
