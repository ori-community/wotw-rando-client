#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderBlockTextured__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderBlockTextured__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBlockTextured__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderBlock__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderBlockTextured__Fields_DEFINED
struct UberShaderColor;
struct UberShaderMainTexture;
struct UberShaderBlockTextured__Fields {
    struct UberShaderBlock__Fields _;
    struct UberShaderColor* Color;
    struct UberShaderMainTexture* MainTexture;
    bool EraseFromAlpha;
    bool DisableCustomMesh;
    bool CenteredQueue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderBlockTextured__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderBlockTextured__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderColor.h>
#include <Modloader/app/structs/UberShaderMainTexture.h>
#endif
#undef IL2CPP_STRUCT_UberShaderBlockTextured__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBlockTextured__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderBlockTextured__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderBlockTextured__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderBlockTextured__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
