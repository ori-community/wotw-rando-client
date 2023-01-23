#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentShadingModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentShadingModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentShadingModifier_DEFINED)
#include <Modloader/app/structs/EnvironmentShadingModifier__Fields.h>
#if defined(IL2CPP_STRUCT_EnvironmentShadingModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvironmentShadingModifier_DEFINED
struct EnvironmentShadingModifier__Class;
struct EnvironmentShadingModifier {
    struct EnvironmentShadingModifier__Class* klass;
    MonitorData* monitor;
    struct EnvironmentShadingModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentShadingModifier_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentShadingModifier_FWDDECL
#include <Modloader/app/structs/EnvironmentShadingModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentShadingModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentShadingModifier_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentShadingModifier_FWDDECL)
#include <Modloader/app/structs/EnvironmentShadingModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentShadingModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
