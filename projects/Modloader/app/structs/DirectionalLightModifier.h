#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectionalLightModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectionalLightModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalLightModifier_DEFINED)
#include <Modloader/app/structs/DirectionalLightModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DirectionalLightModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectionalLightModifier_DEFINED
struct DirectionalLightModifier__Class;
struct DirectionalLightModifier {
    struct DirectionalLightModifier__Class* klass;
    MonitorData* monitor;
    struct DirectionalLightModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectionalLightModifier_FWDDECL)
#define IL2CPP_STRUCT_DirectionalLightModifier_FWDDECL
#include <Modloader/app/structs/DirectionalLightModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectionalLightModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalLightModifier_DEFINED) && !defined(IL2CPP_STRUCT_DirectionalLightModifier_FWDDECL)
#include <Modloader/app/structs/DirectionalLightModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectionalLightModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
