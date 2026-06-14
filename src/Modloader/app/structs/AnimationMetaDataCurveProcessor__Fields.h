#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_DEFINED)
#include <Modloader/app/structs/UnityModelAnimationCurveProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_UnityModelAnimationCurveProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_DEFINED
struct AnimationMetaData;
struct Transform;
struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_;
struct AnimationMetaDataCurveProcessor__Fields {
    struct UnityModelAnimationCurveProcessor__Fields _;
    struct AnimationMetaData* AnimationMetaData;
    struct Transform* m_camera;
    struct Transform* m_cameraTarget;
    struct Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_* m_data;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMetaData.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Transform_AnimationMetaData_AnimationData_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMetaDataCurveProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationMetaDataCurveProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMetaDataCurveProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
