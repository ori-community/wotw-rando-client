#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScrollUIAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScrollUIAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollUIAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_ScrollUIAction__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct Transform;
struct ScrollUIAction__Fields {
    struct ActionMethod__Fields _;
    struct CleverMenuItemSelectionManager* CleverMenuItemSelectionManager;
    struct Transform* Achievements;
    float RowHeight;
    bool m_scroll;
    int32_t m_rowIndex;
    int32_t m_focusIndex;
    int32_t m_topLineIndex;
    int32_t m_bottomLineIndex;
    float m_height;
    int32_t m_indexScrollShift;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScrollUIAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScrollUIAction__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ScrollUIAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollUIAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScrollUIAction__Fields_FWDDECL)
#include <Modloader/app/structs/ScrollUIAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScrollUIAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
