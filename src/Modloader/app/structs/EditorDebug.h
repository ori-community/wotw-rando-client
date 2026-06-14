#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorDebug_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorDebug_DEFINED)
#include <Modloader/app/structs/EditorDebug__Fields.h>
#if defined(IL2CPP_STRUCT_EditorDebug__Fields_DEFINED)
#define IL2CPP_STRUCT_EditorDebug_DEFINED
struct EditorDebug__Class;
struct EditorDebug {
    struct EditorDebug__Class* klass;
    MonitorData* monitor;
    struct EditorDebug__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EditorDebug_FWDDECL)
#define IL2CPP_STRUCT_EditorDebug_FWDDECL
#include <Modloader/app/structs/EditorDebug__Class.h>
#endif
#undef IL2CPP_STRUCT_EditorDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorDebug_DEFINED) && !defined(IL2CPP_STRUCT_EditorDebug_FWDDECL)
#include <Modloader/app/structs/EditorDebug.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorDebug.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
