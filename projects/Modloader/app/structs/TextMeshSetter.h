#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshSetter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshSetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshSetter_DEFINED)
#include <Modloader/app/structs/TextMeshSetter__Fields.h>
#if defined(IL2CPP_STRUCT_TextMeshSetter__Fields_DEFINED)
#define IL2CPP_STRUCT_TextMeshSetter_DEFINED
struct TextMeshSetter__Class;
struct TextMeshSetter {
    struct TextMeshSetter__Class* klass;
    MonitorData* monitor;
    struct TextMeshSetter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshSetter_FWDDECL)
#define IL2CPP_STRUCT_TextMeshSetter_FWDDECL
#include <Modloader/app/structs/TextMeshSetter__Class.h>
#endif
#undef IL2CPP_STRUCT_TextMeshSetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshSetter_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshSetter_FWDDECL)
#include <Modloader/app/structs/TextMeshSetter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshSetter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
