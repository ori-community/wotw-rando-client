#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatTween_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatTween_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatTween_DEFINED)
#define IL2CPP_STRUCT_FloatTween_DEFINED
struct FloatTween_FloatTweenCallback;
struct FloatTween {
    struct FloatTween_FloatTweenCallback* m_Target;
    float m_StartValue;
    float m_TargetValue;
    float m_Duration;
    bool m_IgnoreTimeScale;
};
#endif
#if !defined(IL2CPP_STRUCT_FloatTween_FWDDECL)
#define IL2CPP_STRUCT_FloatTween_FWDDECL
#include <Modloader/app/structs/FloatTween_FloatTweenCallback.h>
#endif
#undef IL2CPP_STRUCT_FloatTween_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatTween_DEFINED) && !defined(IL2CPP_STRUCT_FloatTween_FWDDECL)
#include <Modloader/app/structs/FloatTween.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatTween.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
