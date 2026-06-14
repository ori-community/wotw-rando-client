#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_DEFINED
struct List_1_TextBoxIconsFontGenerator_IconData_;
struct BitmapFont;
struct TextBoxIconsFontGenerator__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_TextBoxIconsFontGenerator_IconData_* Icons;
    struct BitmapFont* BitmapFont;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_FWDDECL
#include <Modloader/app/structs/BitmapFont.h>
#include <Modloader/app/structs/List_1_TextBoxIconsFontGenerator_IconData_.h>
#endif
#undef IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextBoxIconsFontGenerator__Fields_FWDDECL)
#include <Modloader/app/structs/TextBoxIconsFontGenerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextBoxIconsFontGenerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
