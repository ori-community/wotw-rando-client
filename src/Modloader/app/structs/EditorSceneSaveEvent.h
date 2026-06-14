#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorSceneSaveEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorSceneSaveEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorSceneSaveEvent_DEFINED)
#include <Modloader/app/structs/EditorSceneSaveEvent__Fields.h>
#if defined(IL2CPP_STRUCT_EditorSceneSaveEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_EditorSceneSaveEvent_DEFINED
struct EditorSceneSaveEvent__Class;
struct EditorSceneSaveEvent {
    struct EditorSceneSaveEvent__Class* klass;
    MonitorData* monitor;
    struct EditorSceneSaveEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EditorSceneSaveEvent_FWDDECL)
#define IL2CPP_STRUCT_EditorSceneSaveEvent_FWDDECL
#include <Modloader/app/structs/EditorSceneSaveEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_EditorSceneSaveEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorSceneSaveEvent_DEFINED) && !defined(IL2CPP_STRUCT_EditorSceneSaveEvent_FWDDECL)
#include <Modloader/app/structs/EditorSceneSaveEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorSceneSaveEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
