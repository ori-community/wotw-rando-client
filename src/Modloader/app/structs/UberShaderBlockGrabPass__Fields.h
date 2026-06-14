#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderBlock__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_DEFINED
struct UberShaderColor;
struct UberShaderBlockGrabPass__Fields {
    struct UberShaderBlock__Fields _;
    struct UberShaderColor* Color;
    bool OverwriteDistort;
    bool m_inFrustm;
    int32_t m_frame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderColor.h>
#endif
#undef IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderBlockGrabPass__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderBlockGrabPass__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderBlockGrabPass__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
