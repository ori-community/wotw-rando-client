#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuIdle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuIdle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuIdle__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#define IL2CPP_STRUCT_KuIdle__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct KuIdle__Fields {
    struct KuState__Fields _;
    struct MoonAnimation* IdleAnimation;
    struct FloatAnimationParameter* IdleVerticalParameter;
    float m_lastYPos;
    float m_lastDeltaY;
    float m_accelerationY;
    float m_verticalHandlingDelay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuIdle__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuIdle__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_KuIdle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuIdle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuIdle__Fields_FWDDECL)
#include <Modloader/app/structs/KuIdle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuIdle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
