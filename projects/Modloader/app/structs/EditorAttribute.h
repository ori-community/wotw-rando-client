#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorAttribute_DEFINED)
#include <Modloader/app/structs/EditorAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_EditorAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_EditorAttribute_DEFINED
struct EditorAttribute__Class;
struct EditorAttribute {
    struct EditorAttribute__Class* klass;
    MonitorData* monitor;
    struct EditorAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EditorAttribute_FWDDECL)
#define IL2CPP_STRUCT_EditorAttribute_FWDDECL
#include <Modloader/app/structs/EditorAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EditorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EditorAttribute_FWDDECL)
#include <Modloader/app/structs/EditorAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
