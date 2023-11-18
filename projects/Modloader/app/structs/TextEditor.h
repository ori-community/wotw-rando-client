#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextEditor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextEditor_DEFINED)
#include <Modloader/app/structs/TextEditor__Fields.h>
#if defined(IL2CPP_STRUCT_TextEditor__Fields_DEFINED)
#define IL2CPP_STRUCT_TextEditor_DEFINED
struct TextEditor__Class;
struct TextEditor {
    struct TextEditor__Class* klass;
    MonitorData* monitor;
    struct TextEditor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextEditor_FWDDECL)
#define IL2CPP_STRUCT_TextEditor_FWDDECL
#include <Modloader/app/structs/TextEditor__Class.h>
#endif
#undef IL2CPP_STRUCT_TextEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextEditor_DEFINED) && !defined(IL2CPP_STRUCT_TextEditor_FWDDECL)
#include <Modloader/app/structs/TextEditor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextEditor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
