#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_DEFINED
struct StringValueProvider;
struct TextMesh;
struct TextBox;
struct ChangeDetectorString;
struct UnityTextStringDisplayValue__Fields {
    struct MonoBehaviour__Fields _;
    struct StringValueProvider* Value;
    struct TextMesh* m_textMesh;
    struct TextBox* m_textBox;
    struct ChangeDetectorString* m_changeDetector;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_FWDDECL
#include <Modloader/app/structs/ChangeDetectorString.h>
#include <Modloader/app/structs/StringValueProvider.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/TextMesh.h>
#endif
#undef IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnityTextStringDisplayValue__Fields_FWDDECL)
#include <Modloader/app/structs/UnityTextStringDisplayValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTextStringDisplayValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
