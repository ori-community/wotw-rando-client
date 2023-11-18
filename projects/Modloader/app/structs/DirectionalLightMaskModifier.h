#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectionalLightMaskModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectionalLightMaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalLightMaskModifier_DEFINED)
#include <Modloader/app/structs/DirectionalLightMaskModifier__Fields.h>
#if defined(IL2CPP_STRUCT_DirectionalLightMaskModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectionalLightMaskModifier_DEFINED
struct DirectionalLightMaskModifier__Class;
struct DirectionalLightMaskModifier {
    struct DirectionalLightMaskModifier__Class* klass;
    MonitorData* monitor;
    struct DirectionalLightMaskModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectionalLightMaskModifier_FWDDECL)
#define IL2CPP_STRUCT_DirectionalLightMaskModifier_FWDDECL
#include <Modloader/app/structs/DirectionalLightMaskModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectionalLightMaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalLightMaskModifier_DEFINED) && !defined(IL2CPP_STRUCT_DirectionalLightMaskModifier_FWDDECL)
#include <Modloader/app/structs/DirectionalLightMaskModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectionalLightMaskModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
