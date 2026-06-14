#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScriptableObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScriptableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptableObject_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ScriptableObject_DEFINED
struct ScriptableObject__Class;
struct ScriptableObject {
    struct ScriptableObject__Class* klass;
    MonitorData* monitor;
    struct ScriptableObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScriptableObject_FWDDECL)
#define IL2CPP_STRUCT_ScriptableObject_FWDDECL
#include <Modloader/app/structs/ScriptableObject__Class.h>
#endif
#undef IL2CPP_STRUCT_ScriptableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptableObject_DEFINED) && !defined(IL2CPP_STRUCT_ScriptableObject_FWDDECL)
#include <Modloader/app/structs/ScriptableObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScriptableObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
