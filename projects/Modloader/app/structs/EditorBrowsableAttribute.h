#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorBrowsableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorBrowsableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorBrowsableAttribute_DEFINED)
#include <Modloader/app/structs/EditorBrowsableAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_EditorBrowsableAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_EditorBrowsableAttribute_DEFINED
struct EditorBrowsableAttribute__Class;
struct EditorBrowsableAttribute {
    struct EditorBrowsableAttribute__Class* klass;
    MonitorData* monitor;
    struct EditorBrowsableAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EditorBrowsableAttribute_FWDDECL)
#define IL2CPP_STRUCT_EditorBrowsableAttribute_FWDDECL
#include <Modloader/app/structs/EditorBrowsableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EditorBrowsableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorBrowsableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EditorBrowsableAttribute_FWDDECL)
#include <Modloader/app/structs/EditorBrowsableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorBrowsableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
