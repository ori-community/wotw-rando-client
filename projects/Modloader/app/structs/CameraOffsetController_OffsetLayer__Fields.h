#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_DEFINED
struct BlendFloat;
struct Component_1;
struct __declspec(align(8)) CameraOffsetController_OffsetLayer__Fields {
    struct Vector3 Offset;
    struct Vector3 Rotation;
    bool UseOffsetX;
    bool UseOffsetY;
    bool UseOffsetZ;
    bool UseRotationX;
    bool UseRotationY;
    bool UseRotationZ;
    float Duration;
    struct BlendFloat* Weight;
    int32_t Priority;
    bool Active;
    bool UseExtraZoom;
    struct Component_1* Owner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_FWDDECL
#include <Modloader/app/structs/BlendFloat.h>
#include <Modloader/app/structs/Component_1.h>
#endif
#undef IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetController_OffsetLayer__Fields_FWDDECL)
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
