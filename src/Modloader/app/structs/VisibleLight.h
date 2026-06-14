#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VisibleLight_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VisibleLight_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleLight_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/LightType__Enum.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/VisibleLightFlags__Enum.h>
#if defined(IL2CPP_STRUCT_LightType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_VisibleLightFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_VisibleLight_DEFINED
struct VisibleLight {
    LightType__Enum lightType;

    struct Color finalColor;
    struct Rect screenRect;
    struct Matrix4x4 localToWorld;
    float range;
    float spotAngle;
    int32_t instanceId;
    VisibleLightFlags__Enum flags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VisibleLight_FWDDECL)
#define IL2CPP_STRUCT_VisibleLight_FWDDECL
#endif
#undef IL2CPP_STRUCT_VisibleLight_INITIALIZING
#if !defined(IL2CPP_STRUCT_VisibleLight_DEFINED) && !defined(IL2CPP_STRUCT_VisibleLight_FWDDECL)
#include <Modloader/app/structs/VisibleLight.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VisibleLight.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
