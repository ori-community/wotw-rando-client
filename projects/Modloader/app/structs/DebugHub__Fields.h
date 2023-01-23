#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugHub__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugHub__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHub__Fields_DEFINED)
#include <Modloader/app/structs/DebugHub_DebugHubLayout.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DebugHub_DebugHubLayout_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DebugHub__Fields_DEFINED
struct List_1_DebugHubItem_;
struct List_1_System_Int32_;
struct DebugHubItem;
struct GUIStyle;
struct DebugHub__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_DebugHubItem_* m_items;
    struct List_1_System_Int32_* m_modalRestore;
    bool m_active;
    bool m_wasActive;
    int32_t m_modalItemIndex;
    struct DebugHub_DebugHubLayout m_layout;
    struct Vector2 m_inputAxis;
    float m_relativeMouseAngle;
    struct DebugHubItem* m_activeItem;
    float m_maxItemWidth;
    int32_t m_lastScreenWidth;
    int32_t m_lastScreenHeight;
    int32_t m_paddingSize;
    struct GUIStyle* m_centeredLabel;
    struct GUIStyle* m_centeredLabelActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugHub__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugHub__Fields_FWDDECL
#include <Modloader/app/structs/DebugHubItem.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/List_1_DebugHubItem_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_DebugHub__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHub__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugHub__Fields_FWDDECL)
#include <Modloader/app/structs/DebugHub__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugHub__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
