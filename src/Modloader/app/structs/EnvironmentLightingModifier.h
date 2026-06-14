#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentLightingModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentLightingModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLightingModifier_DEFINED)
#include <Modloader/app/structs/EnvironmentLightingModifier__Fields.h>
#if defined(IL2CPP_STRUCT_EnvironmentLightingModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvironmentLightingModifier_DEFINED
struct EnvironmentLightingModifier__Class;
struct EnvironmentLightingModifier {
    struct EnvironmentLightingModifier__Class* klass;
    MonitorData* monitor;
    struct EnvironmentLightingModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentLightingModifier_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentLightingModifier_FWDDECL
#include <Modloader/app/structs/EnvironmentLightingModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentLightingModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLightingModifier_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentLightingModifier_FWDDECL)
#include <Modloader/app/structs/EnvironmentLightingModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentLightingModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
