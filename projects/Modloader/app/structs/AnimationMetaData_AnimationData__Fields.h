#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_DEFINED
struct String;
struct AnimationMetaData_FloatAnimation;
struct __declspec(align(8)) AnimationMetaData_AnimationData__Fields {
    struct String* Name;
    struct AnimationMetaData_FloatAnimation* PositionX;
    struct AnimationMetaData_FloatAnimation* PositionY;
    struct AnimationMetaData_FloatAnimation* PositionZ;
    struct AnimationMetaData_FloatAnimation* RotationZ;
    struct AnimationMetaData_FloatAnimation* ScaleX;
    struct AnimationMetaData_FloatAnimation* ScaleY;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMetaData_FloatAnimation.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMetaData_AnimationData__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationMetaData_AnimationData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMetaData_AnimationData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
