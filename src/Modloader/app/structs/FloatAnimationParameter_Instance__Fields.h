#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_DEFINED
struct FloatAnimationParameter;
struct __declspec(align(8)) FloatAnimationParameter_Instance__Fields {
    struct FloatAnimationParameter* m_parameter;
    float m_targetValue;
    float m_currentValue;
    bool m_previewMode;
    float m_currentVelocity;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_FWDDECL)
#define IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FloatAnimationParameter_Instance__Fields_FWDDECL)
#include <Modloader/app/structs/FloatAnimationParameter_Instance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatAnimationParameter_Instance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
