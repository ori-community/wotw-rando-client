#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderMessagePlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderMessagePlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessagePlugin__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_RecorderMessagePlugin__Fields_DEFINED
struct RecorderMessageInputUI;
struct GameObject;
struct Dictionary_2_RecorderMessageData_System_Int32_;
struct String;
struct RecorderMessagePlugin__Fields {
    struct MonoBehaviour__Fields _;
    struct RecorderMessageInputUI* m_recorderMessageInputUI;
    struct GameObject* m_recorderMessageInuptUIPrefab;
    struct Dictionary_2_RecorderMessageData_System_Int32_* m_recorderMessageData;
    bool m_showMessages;
    bool m_shouldOpenMessageInputUI;
    struct Vector2 m_scrollPosition;
    struct Vector2 m_tooltipScrollPosition;
    struct String* m_lastMessageText;
    float m_offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderMessagePlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderMessagePlugin__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_RecorderMessageData_System_Int32_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RecorderMessageInputUI.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RecorderMessagePlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessagePlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderMessagePlugin__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderMessagePlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderMessagePlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
