#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomShaderModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomShaderModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomShaderModifier_DEFINED)
#include <Modloader/app/structs/CustomShaderModifier__Fields.h>
#if defined(IL2CPP_STRUCT_CustomShaderModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomShaderModifier_DEFINED
struct CustomShaderModifier__Class;
struct CustomShaderModifier {
    struct CustomShaderModifier__Class* klass;
    MonitorData* monitor;
    struct CustomShaderModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomShaderModifier_FWDDECL)
#define IL2CPP_STRUCT_CustomShaderModifier_FWDDECL
#include <Modloader/app/structs/CustomShaderModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomShaderModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomShaderModifier_DEFINED) && !defined(IL2CPP_STRUCT_CustomShaderModifier_FWDDECL)
#include <Modloader/app/structs/CustomShaderModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomShaderModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
