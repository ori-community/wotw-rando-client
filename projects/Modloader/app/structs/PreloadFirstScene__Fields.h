#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreloadFirstScene__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreloadFirstScene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadFirstScene__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PreloadFirstScene__Fields_DEFINED
struct MoonTimeline;
struct SceneMetaData;
struct Condition_1;
struct PreloadFirstScene__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct SceneMetaData* m_metaData;
    bool m_preloaded;
    struct Condition_1* PreloadCondition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreloadFirstScene__Fields_FWDDECL)
#define IL2CPP_STRUCT_PreloadFirstScene__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_PreloadFirstScene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadFirstScene__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PreloadFirstScene__Fields_FWDDECL)
#include <Modloader/app/structs/PreloadFirstScene__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreloadFirstScene__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
