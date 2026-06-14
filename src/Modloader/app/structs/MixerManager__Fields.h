#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MixerManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MixerManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerManager__Fields_DEFINED)
#include <Modloader/app/structs/MixerGroupSettings.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_MixerGroupSettings_DEFINED)
#define IL2CPP_STRUCT_MixerManager__Fields_DEFINED
struct MixerSnapshot;
struct List_1_MixerSnapshot_;
struct List_1_MixerSnapshotZone_;
struct MixerManager__Fields {
    struct MonoBehaviour__Fields _;
    struct MixerSnapshot* DefaultSceneSnapshot;
    struct MixerSnapshot* UISnapshot;
    struct MixerSnapshot* ModulatingSnapshot;
    struct MixerGroupSettings m_currentMixerGroupSettings;
    bool m_wasInUI;
    struct List_1_MixerSnapshot_* m_currentlyActiveSnapshots;
    struct MixerGroupSettings m_settings;
    struct List_1_MixerSnapshotZone_* m_snapshotZones;
    struct MixerSnapshot* m_currentSceneMixerSnapshot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MixerManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_MixerManager__Fields_FWDDECL
#include <Modloader/app/structs/List_1_MixerSnapshotZone_.h>
#include <Modloader/app/structs/List_1_MixerSnapshot_.h>
#include <Modloader/app/structs/MixerSnapshot.h>
#endif
#undef IL2CPP_STRUCT_MixerManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MixerManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MixerManager__Fields_FWDDECL)
#include <Modloader/app/structs/MixerManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MixerManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
