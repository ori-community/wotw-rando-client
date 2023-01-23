#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderModifier_DEFINED)
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderModifier_DEFINED
struct UberShaderModifier__Class;
struct UberShaderModifier {
    struct UberShaderModifier__Class* klass;
    MonitorData* monitor;
    struct UberShaderModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderModifier_FWDDECL)
#define IL2CPP_STRUCT_UberShaderModifier_FWDDECL
#include <Modloader/app/structs/UberShaderModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_UberShaderModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderModifier_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderModifier_FWDDECL)
#include <Modloader/app/structs/UberShaderModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
