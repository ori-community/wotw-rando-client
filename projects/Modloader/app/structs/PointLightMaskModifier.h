#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointLightMaskModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointLightMaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointLightMaskModifier_DEFINED)
#include <Modloader/app/structs/PointLightMaskModifier__Fields.h>
#if defined(IL2CPP_STRUCT_PointLightMaskModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_PointLightMaskModifier_DEFINED
struct PointLightMaskModifier__Class;
struct PointLightMaskModifier {
    struct PointLightMaskModifier__Class* klass;
    MonitorData* monitor;
    struct PointLightMaskModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointLightMaskModifier_FWDDECL)
#define IL2CPP_STRUCT_PointLightMaskModifier_FWDDECL
#include <Modloader/app/structs/PointLightMaskModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_PointLightMaskModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointLightMaskModifier_DEFINED) && !defined(IL2CPP_STRUCT_PointLightMaskModifier_FWDDECL)
#include <Modloader/app/structs/PointLightMaskModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointLightMaskModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
