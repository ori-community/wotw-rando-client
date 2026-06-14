#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_DEFINED)
#define IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_DEFINED
struct String;
struct GameObject;
struct __declspec(align(8)) TextBoxIconsFontGenerator_IconData_1__Fields {
    struct String* Character;
    struct GameObject* Icon;
    float Width;
};
#endif
#if !defined(IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextBoxIconsFontGenerator_IconData_1__Fields_FWDDECL)
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
