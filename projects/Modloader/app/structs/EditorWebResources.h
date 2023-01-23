#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorWebResources_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorWebResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorWebResources_DEFINED)
#include <Modloader/app/structs/EditorWebResources__Fields.h>
#if defined(IL2CPP_STRUCT_EditorWebResources__Fields_DEFINED)
#define IL2CPP_STRUCT_EditorWebResources_DEFINED
struct EditorWebResources__Class;
struct EditorWebResources {
    struct EditorWebResources__Class* klass;
    MonitorData* monitor;
    struct EditorWebResources__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EditorWebResources_FWDDECL)
#define IL2CPP_STRUCT_EditorWebResources_FWDDECL
#include <Modloader/app/structs/EditorWebResources__Class.h>
#endif
#undef IL2CPP_STRUCT_EditorWebResources_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorWebResources_DEFINED) && !defined(IL2CPP_STRUCT_EditorWebResources_FWDDECL)
#include <Modloader/app/structs/EditorWebResources.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorWebResources.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
