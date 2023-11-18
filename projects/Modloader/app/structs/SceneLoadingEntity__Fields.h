#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingEntity__Fields_DEFINED
struct SceneMetaData;
struct MoonGuid;
struct SceneLoadingEntity__Fields {
    struct TimelineEntity__Fields _;
    struct SceneMetaData* SceneMetaData;
    struct MoonGuid* m_sceneMoonGuid;
    bool m_started;
    bool m_loadedAndEnabled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingEntity__Fields_FWDDECL
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SceneLoadingEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
