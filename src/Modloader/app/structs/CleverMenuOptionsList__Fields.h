#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuOptionsList__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuOptionsList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CleverMenuOptionsList__Fields_DEFINED
struct GameObject;
struct Transform;
struct List_1_UnityEngine_GameObject_;
struct CleverMenuItemSelectionManager;
struct CleverMenuOptionsList__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Item;
    float Spacing;
    struct Transform* Origin;
    struct List_1_UnityEngine_GameObject_* m_items;
    struct Transform* ScrollPivot;
    bool Scrollable;
    int32_t OnScreenLimit;
    float m_scrollPosition;
    float m_scrollPositionTarget;
    float ScrollingSpeed;
    struct CleverMenuItemSelectionManager* m_selectionManager;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuOptionsList__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuOptionsList__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_FWDDECL)
#include <Modloader/app/structs/CleverMenuOptionsList__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuOptionsList__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
