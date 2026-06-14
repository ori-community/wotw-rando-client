#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorDebug__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorDebug__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorDebug__Fields_DEFINED)
#define IL2CPP_STRUCT_EditorDebug__Fields_DEFINED
struct StreamWriter;
struct String;
struct __declspec(align(8)) EditorDebug__Fields {
    struct StreamWriter* m_stream;
    struct String* Name;
    struct String* m_filepath;
    bool errorLogged;
};
#endif
#if !defined(IL2CPP_STRUCT_EditorDebug__Fields_FWDDECL)
#define IL2CPP_STRUCT_EditorDebug__Fields_FWDDECL
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EditorDebug__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorDebug__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EditorDebug__Fields_FWDDECL)
#include <Modloader/app/structs/EditorDebug__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorDebug__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
