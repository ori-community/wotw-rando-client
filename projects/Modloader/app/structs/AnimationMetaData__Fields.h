#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMetaData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaData__Fields_DEFINED)
#include <Modloader/app/structs/AnimationMetaData_ViewModes__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_AnimationMetaData_ViewModes__Enum_DEFINED)
#define IL2CPP_STRUCT_AnimationMetaData__Fields_DEFINED
struct TextureAnimation;
struct String;
struct List_1_AnimationMetaData_AnimationData_;
struct AnimationMetaData_AnimationData;
struct AnimationMetaData__Fields {
    struct ScriptableObject__Fields _;
    struct TextureAnimation* Animation;
    float CameraTargetDistance;
    float CameraFieldOfView;
    float AspectRatio;
    bool Perspective;
    struct String* CameraName;
    struct Vector2 PlaneSize;
    int32_t FrameEnd;
    AnimationMetaData_ViewModes__Enum ViewMode;

    int32_t FrameStart;
    float FrameRate;
    struct List_1_AnimationMetaData_AnimationData_* Data;
    struct AnimationMetaData_AnimationData* CameraData;
    struct AnimationMetaData_AnimationData* Camera;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMetaData__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationMetaData__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMetaData_AnimationData.h>
#include <Modloader/app/structs/List_1_AnimationMetaData_AnimationData_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#undef IL2CPP_STRUCT_AnimationMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMetaData__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationMetaData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMetaData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
