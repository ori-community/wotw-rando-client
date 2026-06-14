#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EditorScene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EditorScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorScene_DEFINED)
#define IL2CPP_STRUCT_EditorScene_DEFINED
struct EditorScene__Class;
struct EditorScene {
    struct EditorScene__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EditorScene_FWDDECL)
#define IL2CPP_STRUCT_EditorScene_FWDDECL
#include <Modloader/app/structs/EditorScene__Class.h>
#endif
#undef IL2CPP_STRUCT_EditorScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_EditorScene_DEFINED) && !defined(IL2CPP_STRUCT_EditorScene_FWDDECL)
#include <Modloader/app/structs/EditorScene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EditorScene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
