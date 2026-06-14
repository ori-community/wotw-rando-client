#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoScrollTexture__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoScrollTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoScrollTexture__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AutoScrollTexture__Fields_DEFINED
struct Renderer;
struct AnimationCurve;
struct Condition_1;
struct Material;
struct AutoScrollTexture__Fields {
    struct Suspendable__Fields _;
    struct Renderer* TargetRenderer;
    struct Vector2 Speed;
    struct AnimationCurve* Curve;
    bool UseCurve;
    struct Condition_1* Condition;
    struct Vector2 m_shift;
    struct Vector3 m_intialPosition;
    struct Material* m_material;
    int32_t m_textureID;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoScrollTexture__Fields_FWDDECL)
#define IL2CPP_STRUCT_AutoScrollTexture__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_AutoScrollTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoScrollTexture__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AutoScrollTexture__Fields_FWDDECL)
#include <Modloader/app/structs/AutoScrollTexture__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoScrollTexture__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
