#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumetricAreaLight__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumetricAreaLight__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricAreaLight__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_VolumetricAreaLight__Fields_DEFINED
struct AxisAlignedBox;
struct Texture2D;
struct VolumetricCanvas;
struct VolumetricAreaLight__Fields {
    struct SaveSerialize__Fields _;
    struct AxisAlignedBox* Box;
    float Range;
    struct Color Color;
    float Intensity;
    struct Texture2D* Cookie;
    struct VolumetricCanvas* VolumetricCanvas;
    float AttenuationCurve;
    bool LockOnLayer;
    int32_t Layer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumetricAreaLight__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumetricAreaLight__Fields_FWDDECL
#include <Modloader/app/structs/AxisAlignedBox.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/VolumetricCanvas.h>
#endif
#undef IL2CPP_STRUCT_VolumetricAreaLight__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricAreaLight__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumetricAreaLight__Fields_FWDDECL)
#include <Modloader/app/structs/VolumetricAreaLight__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumetricAreaLight__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
