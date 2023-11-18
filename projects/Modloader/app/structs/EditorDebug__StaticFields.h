#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorDebug__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorDebug__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorDebug__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EditorDebug__StaticFields_DEFINED
struct String;
struct EditorDebug__StaticFields {
    struct String* s_basePath;
    struct String* s_baseFile;
};
#endif
#if !defined(IL2CPP_STRUCT_EditorDebug__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EditorDebug__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EditorDebug__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorDebug__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EditorDebug__StaticFields_FWDDECL)
#include <Modloader/app/structs/EditorDebug__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorDebug__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
