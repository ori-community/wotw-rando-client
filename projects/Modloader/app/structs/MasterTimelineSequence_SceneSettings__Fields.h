#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_DEFINED
struct SceneMetaData;
struct __declspec(align(8)) MasterTimelineSequence_SceneSettings__Fields {
    struct SceneMetaData* SceneMetaData;
    float SceneStartTime;
    float BaseDuration;
    float CrossfadeDuration;
    float PreloadTime;
};
#endif
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_FWDDECL
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MasterTimelineSequence_SceneSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MasterTimelineSequence_SceneSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MasterTimelineSequence_SceneSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
