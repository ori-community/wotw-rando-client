#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshSetter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshSetter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshSetter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TextMeshSetter__Fields_DEFINED
struct StringValueProvider;
struct TextBox;
struct String;
struct TextMeshSetter__Fields {
    struct MonoBehaviour__Fields _;
    struct StringValueProvider* StringValueProvider;
    struct TextBox* m_textBox;
    struct String* m_previousString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshSetter__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextMeshSetter__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringValueProvider.h>
#include <Modloader/app/structs/TextBox.h>
#endif
#undef IL2CPP_STRUCT_TextMeshSetter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshSetter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshSetter__Fields_FWDDECL)
#include <Modloader/app/structs/TextMeshSetter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshSetter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
