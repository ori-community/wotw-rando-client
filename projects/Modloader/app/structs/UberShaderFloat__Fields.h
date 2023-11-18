#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderFloat__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderFloat__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderFloat__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderFloat__Fields_DEFINED
struct String;
struct UberShaderFloat__Fields {
    struct UberShaderProperty__Fields _;
    float m_floatValue;
    float Scale;
    struct String* m_DefaultShaderValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderFloat__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderFloat__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UberShaderFloat__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderFloat__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderFloat__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderFloat__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderFloat__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
