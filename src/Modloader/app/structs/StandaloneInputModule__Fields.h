#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StandaloneInputModule__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StandaloneInputModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneInputModule__Fields_DEFINED)
#include <Modloader/app/structs/PointerInputModule__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_PointerInputModule__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_StandaloneInputModule__Fields_DEFINED
struct GameObject;
struct PointerEventData;
struct String;
struct StandaloneInputModule__Fields {
    struct PointerInputModule__Fields _;
    float m_PrevActionTime;
    struct Vector2 m_LastMoveVector;
    int32_t m_ConsecutiveMoveCount;
    struct Vector2 m_LastMousePosition;
    struct Vector2 m_MousePosition;
    struct GameObject* m_CurrentFocusedGameObject;
    struct PointerEventData* m_InputPointerEvent;
    struct String* m_HorizontalAxis;
    struct String* m_VerticalAxis;
    struct String* m_SubmitButton;
    struct String* m_CancelButton;
    float m_InputActionsPerSecond;
    float m_RepeatDelay;
    bool m_ForceModuleActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StandaloneInputModule__Fields_FWDDECL)
#define IL2CPP_STRUCT_StandaloneInputModule__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StandaloneInputModule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StandaloneInputModule__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StandaloneInputModule__Fields_FWDDECL)
#include <Modloader/app/structs/StandaloneInputModule__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StandaloneInputModule__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
