#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Slider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Slider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Slider__Fields_DEFINED)
#include <Modloader/app/structs/DrivenRectTransformTracker.h>
#include <Modloader/app/structs/Selectable__Fields.h>
#include <Modloader/app/structs/Slider_Direction__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Slider_Direction__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DrivenRectTransformTracker_DEFINED)
#define IL2CPP_STRUCT_Slider__Fields_DEFINED
struct RectTransform;
struct Slider_SliderEvent;
struct Image;
struct Transform;
struct Slider__Fields {
    struct Selectable__Fields _;
    struct RectTransform* m_FillRect;
    struct RectTransform* m_HandleRect;
    Slider_Direction__Enum m_Direction;

    float m_MinValue;
    float m_MaxValue;
    bool m_WholeNumbers;
    float m_Value;
    struct Slider_SliderEvent* m_OnValueChanged;
    struct Image* m_FillImage;
    struct Transform* m_FillTransform;
    struct RectTransform* m_FillContainerRect;
    struct Transform* m_HandleTransform;
    struct RectTransform* m_HandleContainerRect;
    struct Vector2 m_Offset;
    struct DrivenRectTransformTracker m_Tracker;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Slider__Fields_FWDDECL)
#define IL2CPP_STRUCT_Slider__Fields_FWDDECL
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Slider_SliderEvent.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Slider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Slider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Slider__Fields_FWDDECL)
#include <Modloader/app/structs/Slider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Slider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
