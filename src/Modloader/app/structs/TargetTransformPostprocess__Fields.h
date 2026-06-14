#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TargetTransformPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TargetTransformPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetTransformPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_TargetTransformPostprocess__Fields_DEFINED
struct TargetTransformPostprocess_TransformMapping__Array;
struct TargetTransformPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    struct TargetTransformPostprocess_TransformMapping__Array* Mappings;
    int32_t m_order;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TargetTransformPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_TargetTransformPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/TargetTransformPostprocess_TransformMapping__Array.h>
#endif
#undef IL2CPP_STRUCT_TargetTransformPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TargetTransformPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TargetTransformPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/TargetTransformPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TargetTransformPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
