#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuPage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuPage__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DebugMenuPage__Fields_DEFINED
struct String;
struct List_1_List_1_IDebugMenuItem_;
struct Dictionary_2_System_String_DebugMenuPage_;
struct DebugMenuPage;
struct Func_1_String_;
struct __declspec(align(8)) DebugMenuPage__Fields {
    struct String* _Text_k__BackingField;
    struct String* _HelpText_k__BackingField;
    bool _Active_k__BackingField;
    bool _Visible_k__BackingField;
    struct String* _Path_k__BackingField;
    struct List_1_List_1_IDebugMenuItem_* _Items_k__BackingField;
    float VerticalSpace;
    float HorizontalSpace;
    struct Vector2 m_cursorIndex;
    struct Vector2 m_lastIndex;
    struct Vector2 m_minIndex;
    float m_offset;
    bool m_cursorUpdated;
    bool m_rowUpdated;
    bool m_colSwitch;
    float m_holdDelayDuration;
    float m_holdRemainingTime;
    struct Dictionary_2_System_String_DebugMenuPage_* m_subMenus;
    struct Dictionary_2_System_String_DebugMenuPage_* m_recycledMenus;
    float m_pressedTimeCountDown;
    struct DebugMenuPage* Parent;
    struct Func_1_String_* _DynamicText_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuPage__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuPage__Fields_FWDDECL
#include <Modloader/app/structs/DebugMenuPage.h>
#include <Modloader/app/structs/Dictionary_2_System_String_DebugMenuPage_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuPage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuPage__Fields_FWDDECL)
#include <Modloader/app/structs/DebugMenuPage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuPage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
