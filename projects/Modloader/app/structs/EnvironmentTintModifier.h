#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentTintModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentTintModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentTintModifier_DEFINED)
#include <Modloader/app/structs/EnvironmentTintModifier__Fields.h>
#if defined(IL2CPP_STRUCT_EnvironmentTintModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvironmentTintModifier_DEFINED
struct EnvironmentTintModifier__Class;
struct EnvironmentTintModifier {
    struct EnvironmentTintModifier__Class* klass;
    MonitorData* monitor;
    struct EnvironmentTintModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentTintModifier_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentTintModifier_FWDDECL
#include <Modloader/app/structs/EnvironmentTintModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentTintModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentTintModifier_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentTintModifier_FWDDECL)
#include <Modloader/app/structs/EnvironmentTintModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentTintModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
