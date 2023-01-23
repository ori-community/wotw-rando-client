#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderColor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderColor_DEFINED)
#include <Modloader/app/structs/UberShaderColor__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderColor__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderColor_DEFINED
struct UberShaderColor__Class;
struct UberShaderColor {
    struct UberShaderColor__Class* klass;
    MonitorData* monitor;
    struct UberShaderColor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderColor_FWDDECL)
#define IL2CPP_STRUCT_UberShaderColor_FWDDECL
#include <Modloader/app/structs/UberShaderColor__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderColor_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderColor_FWDDECL)
#include <Modloader/app/structs/UberShaderColor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderColor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
