#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderCurve__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderCurve__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCurve__Fields_DEFINED)
#include <Modloader/app/structs/TextureWrapMode__Enum.h>
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED) && defined(IL2CPP_STRUCT_TextureWrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderCurve__Fields_DEFINED
struct AnimationCurve;
struct Texture2D;
struct UberShaderCurve__Fields {
    struct UberShaderProperty__Fields _;
    struct AnimationCurve* m_curve;
    float TimeScale;
    float CurveScale;
    float TimeOffset;
    TextureWrapMode__Enum WrapMode;

    float m_curveScale;
    float m_curveDuration;
    struct Texture2D* m_texture;
    int32_t m_settingsId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderCurve__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderCurve__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_UberShaderCurve__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCurve__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderCurve__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderCurve__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderCurve__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
