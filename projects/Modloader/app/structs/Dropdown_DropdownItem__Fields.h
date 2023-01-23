#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_DEFINED
struct Text;
struct Image;
struct RectTransform;
struct Toggle;
struct Dropdown_DropdownItem__Fields {
    struct MonoBehaviour__Fields _;
    struct Text* m_Text;
    struct Image* m_Image;
    struct RectTransform* m_RectTransform;
    struct Toggle* m_Toggle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_FWDDECL
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/Toggle.h>
#endif
#undef IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Dropdown_DropdownItem__Fields_FWDDECL)
#include <Modloader/app/structs/Dropdown_DropdownItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dropdown_DropdownItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
