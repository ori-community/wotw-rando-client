#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Scrollbar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Scrollbar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scrollbar__Fields_DEFINED)
#include <Modloader/app/structs/DrivenRectTransformTracker.h>
#include <Modloader/app/structs/Scrollbar_Direction__Enum.h>
#include <Modloader/app/structs/Selectable__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Scrollbar_Direction__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DrivenRectTransformTracker_DEFINED)
#define IL2CPP_STRUCT_Scrollbar__Fields_DEFINED
struct RectTransform;
struct Scrollbar_ScrollEvent;
struct Coroutine;
struct Scrollbar__Fields {
    struct Selectable__Fields _;
    struct RectTransform* m_HandleRect;
    Scrollbar_Direction__Enum m_Direction;

    float m_Value;
    float m_Size;
    int32_t m_NumberOfSteps;
    struct Scrollbar_ScrollEvent* m_OnValueChanged;
    struct RectTransform* m_ContainerRect;
    struct Vector2 m_Offset;
    struct DrivenRectTransformTracker m_Tracker;
    struct Coroutine* m_PointerDownRepeat;
    bool isPointerDownAndNotDragging;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Scrollbar__Fields_FWDDECL)
#define IL2CPP_STRUCT_Scrollbar__Fields_FWDDECL
#include <Modloader/app/structs/Coroutine.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Scrollbar_ScrollEvent.h>
#endif
#undef IL2CPP_STRUCT_Scrollbar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scrollbar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Scrollbar__Fields_FWDDECL)
#include <Modloader/app/structs/Scrollbar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Scrollbar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
