#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfField_FocusSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfField_FocusSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_FocusSettings_DEFINED)
#define IL2CPP_STRUCT_DepthOfField_FocusSettings_DEFINED
struct Transform;
struct DepthOfField_FocusSettings {
    struct Transform* transform;
    float focusPlane;
    float range;
    float nearPlane;
    float nearFalloff;
    float farPlane;
    float farFalloff;
    float nearBlurRadius;
    float farBlurRadius;
};
#endif
#if !defined(IL2CPP_STRUCT_DepthOfField_FocusSettings_FWDDECL)
#define IL2CPP_STRUCT_DepthOfField_FocusSettings_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DepthOfField_FocusSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_FocusSettings_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfField_FocusSettings_FWDDECL)
#include <Modloader/app/structs/DepthOfField_FocusSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfField_FocusSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
