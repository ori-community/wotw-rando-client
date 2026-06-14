#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleToTextBox__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleToTextBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleToTextBox__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScaleToTextBox__Fields_DEFINED
struct Transform;
struct TextBox;
struct ScaleToTextBox__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Background;
    struct TextBox* TextBox;
    struct Vector2 TopLeftPadding;
    struct Vector2 BottomRightPadding;
    float MinWidth;
    float MinHeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleToTextBox__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScaleToTextBox__Fields_FWDDECL
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ScaleToTextBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleToTextBox__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScaleToTextBox__Fields_FWDDECL)
#include <Modloader/app/structs/ScaleToTextBox__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleToTextBox__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
