#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBox_DEFINED)
#include <Modloader/app/structs/SceneBox__Fields.h>
#if defined(IL2CPP_STRUCT_SceneBox__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneBox_DEFINED
struct SceneBox__Class;
struct SceneBox {
    struct SceneBox__Class* klass;
    MonitorData* monitor;
    struct SceneBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneBox_FWDDECL)
#define IL2CPP_STRUCT_SceneBox_FWDDECL
#include <Modloader/app/structs/SceneBox__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBox_DEFINED) && !defined(IL2CPP_STRUCT_SceneBox_FWDDECL)
#include <Modloader/app/structs/SceneBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
