#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_DEFINED)
#include <Modloader/app/structs/PersistentEditorOnlySceneComponent__Fields.h>
#if defined(IL2CPP_STRUCT_PersistentEditorOnlySceneComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_DEFINED
struct PersistentEditorOnlySceneComponent__Class;
struct PersistentEditorOnlySceneComponent {
    struct PersistentEditorOnlySceneComponent__Class* klass;
    MonitorData* monitor;
    struct PersistentEditorOnlySceneComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_FWDDECL)
#define IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_FWDDECL
#include <Modloader/app/structs/PersistentEditorOnlySceneComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_DEFINED) && !defined(IL2CPP_STRUCT_PersistentEditorOnlySceneComponent_FWDDECL)
#include <Modloader/app/structs/PersistentEditorOnlySceneComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PersistentEditorOnlySceneComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
