#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) TargetTransformPostprocess_TransformMapping__Fields {
    struct Transform* Transform;
    struct Transform* TargetTransform;
};
#endif
#if !defined(IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_FWDDECL)
#define IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TargetTransformPostprocess_TransformMapping__Fields_FWDDECL)
#include <Modloader/app/structs/TargetTransformPostprocess_TransformMapping__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetTransformPostprocess_TransformMapping__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
