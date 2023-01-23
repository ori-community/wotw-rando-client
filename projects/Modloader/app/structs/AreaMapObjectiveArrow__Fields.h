#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_DEFINED
struct GameObject;
struct TextBox;
struct MessageBox;
struct AreaMapObjectiveArrow__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Arrow;
    struct GameObject* ArrowRotation;
    struct Rect Area;
    struct TextBox* TextBox;
    struct MessageBox* MessageBox;
    bool ShowNumber;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/TextBox.h>
#endif
#undef IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapObjectiveArrow__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapObjectiveArrow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapObjectiveArrow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
