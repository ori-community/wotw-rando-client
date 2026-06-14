#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_DEFINED
struct Action_1_Int32_;
struct String;
struct RecorderSettings;
struct RecorderOutputAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    bool IsOutputtingScreenshots;
    struct Action_1_Int32_* onComplete;
    bool m_hideUi;
    bool m_spawnEnemies;
    struct String* m_shotName;
    int32_t m_crossFadeTime;
    bool m_flipInX;
    bool m_scenarioMode;
    bool m_shouldRecord;
    struct RecorderSettings* m_settings;
    float m_preRecordFadeTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/RecorderSettings.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderOutputAnimatorEntity__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderOutputAnimatorEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderOutputAnimatorEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
