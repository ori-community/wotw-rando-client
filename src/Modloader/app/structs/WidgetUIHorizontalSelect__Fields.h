#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_DEFINED
struct Transform;
struct GameObject;
struct String__Array;
struct GameObject__Array;
struct WidgetUIHorizontalSelect__Fields {
    struct MonoBehaviour__Fields _;
    struct Color TextColorActive;
    struct Color TextColorInactive;
    struct Transform* Root;
    struct GameObject* Item;
    float Spread;
    float Speed;
    float TransparencyRange;
    struct String__Array* Names;
    struct GameObject__Array* Items;
    int32_t m_selectedIndex;
    int32_t m_nextIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_FWDDECL)
#define IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WidgetUIHorizontalSelect__Fields_FWDDECL)
#include <Modloader/app/structs/WidgetUIHorizontalSelect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WidgetUIHorizontalSelect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
