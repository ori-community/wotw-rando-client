#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_DEFINED
struct TextAsset;
struct List_1_System_String_;
struct List_1_RuntimeSceneMetaData_;
struct RecorderData;
struct RecorderAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    int32_t RecorderSetupComplete;
    struct TextAsset* TextAsset;
    bool m_shouldLoadScenes;
    struct List_1_System_String_* m_ignoredScenes;
    struct List_1_RuntimeSceneMetaData_* m_runtimeSceneMetaDatas;
    bool m_finished;
    bool m_started;
    float m_time;
    bool m_loaded;
    int32_t m_enabledCount;
    struct RecorderData* m_recorderData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/List_1_RuntimeSceneMetaData_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/RecorderData.h>
#include <Modloader/app/structs/TextAsset.h>
#endif
#undef IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
