#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorTween_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorTween_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorTween_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ColorTween_ColorTweenMode__Enum.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_ColorTween_ColorTweenMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ColorTween_DEFINED
struct ColorTween_ColorTweenCallback;
struct ColorTween {
    struct ColorTween_ColorTweenCallback* m_Target;
    struct Color m_StartColor;
    struct Color m_TargetColor;
    ColorTween_ColorTweenMode__Enum m_TweenMode;

    float m_Duration;
    bool m_IgnoreTimeScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorTween_FWDDECL)
#define IL2CPP_STRUCT_ColorTween_FWDDECL
#include <Modloader/app/structs/ColorTween_ColorTweenCallback.h>
#endif
#undef IL2CPP_STRUCT_ColorTween_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorTween_DEFINED) && !defined(IL2CPP_STRUCT_ColorTween_FWDDECL)
#include <Modloader/app/structs/ColorTween.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorTween.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
