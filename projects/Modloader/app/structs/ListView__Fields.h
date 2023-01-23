#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListView__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ListView__Fields_DEFINED
struct Action_1_Moon_UberStateVisualization_ListViewItem_;
struct GUIContent;
struct ListViewItem;
struct List_1_Moon_UberStateVisualization_ListViewItem_;
struct __declspec(align(8)) ListView__Fields {
    struct Action_1_Moon_UberStateVisualization_ListViewItem_* OnSelectionChanged;
    struct GUIContent* m_header;
    struct Rect m_scrollViewRect;
    struct Rect m_headerRect;
    struct Rect m_contentRect;
    bool m_showVerticalScroll;
    float m_verticalScrollSize;
    struct Rect m_verticalScrollbarRect;
    struct Rect m_horizontalScrollbarRect;
    struct Rect m_itemTempRect;
    struct Rect m_viewAreaRect;
    struct Vector2 m_scrollPosition;
    float m_iterationStartTime;
    bool m_fastIterationStarted;
    int32_t m_selectedItemIndex;
    struct ListViewItem* m_selectedItem;
    struct ListViewItem* m_hoveredItem;
    struct List_1_Moon_UberStateVisualization_ListViewItem_* m_items;
    int32_t m_controlId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListView__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListView__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_UberStateVisualization_ListViewItem_.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/ListViewItem.h>
#include <Modloader/app/structs/List_1_Moon_UberStateVisualization_ListViewItem_.h>
#endif
#undef IL2CPP_STRUCT_ListView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListView__Fields_FWDDECL)
#include <Modloader/app/structs/ListView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
