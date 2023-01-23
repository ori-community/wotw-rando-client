#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_DEFINED)
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_DEFINED
struct GlobalRecordingTable;
struct List_1_GhostAnimationParameterPlugin_RecordableAnimatorEntry_;
struct GhostAnimationParameterPlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    struct GlobalRecordingTable* _GlobalRecordingTable_k__BackingField;
    struct List_1_GhostAnimationParameterPlugin_RecordableAnimatorEntry_* m_animationTrackers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_FWDDECL
#include <Modloader/app/structs/GlobalRecordingTable.h>
#include <Modloader/app/structs/List_1_GhostAnimationParameterPlugin_RecordableAnimatorEntry_.h>
#endif
#undef IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostAnimationParameterPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/GhostAnimationParameterPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostAnimationParameterPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
