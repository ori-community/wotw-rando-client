#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_DEFINED)
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_DEFINED
struct RuntimeSceneMetaData;
struct GhostSceneTrackingPlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    struct RuntimeSceneMetaData* m_lastActiveScene;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_FWDDECL
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostSceneTrackingPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/GhostSceneTrackingPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostSceneTrackingPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
