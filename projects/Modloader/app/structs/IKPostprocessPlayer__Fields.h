#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKPostprocessPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKPostprocessPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKPostprocessPlayer__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocessPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocessPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_IKPostprocessPlayer__Fields_DEFINED
struct AnimationCurve;
struct IKTargetBehaviour;
struct IKPostprocessPlayer__Fields {
    struct AnimationPostprocessPlayer__Fields _;
    struct AnimationCurve* SpeedCurve;
    struct IKTargetBehaviour* m_targetBehaviour;
    bool Revert;
    float m_initWeight;
    float m_initSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKPostprocessPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKPostprocessPlayer__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/IKTargetBehaviour.h>
#endif
#undef IL2CPP_STRUCT_IKPostprocessPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKPostprocessPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKPostprocessPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/IKPostprocessPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKPostprocessPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
