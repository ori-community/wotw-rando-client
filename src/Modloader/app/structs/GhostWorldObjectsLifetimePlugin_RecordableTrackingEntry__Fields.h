#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_DEFINED
struct GameObject;
struct GlobalRecordingTable_RecordableEntry;
struct __declspec(align(8)) GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields {
    struct GameObject* GameObject;
    struct GlobalRecordingTable_RecordableEntry* RecordableEntry;
    bool ForceRecordActivation;
    bool ForceRecordTransform;
    struct Vector3 LastPosition;
    struct Quaternion LastRotation;
    struct Vector3 LastScale;
    bool LastActivation;
    bool PositionChanged;
    bool RotationChanged;
    bool ScaleChanged;
    bool ActivationChanged;
    bool TrackTransformChanges;
    bool IsChildTransform;
    int32_t AmountOfRecordedPositions;
    int32_t AmountOfRecordedRotation;
    int32_t AmountOfRecordedScale;
    int32_t AmountOfRecordedActivation;
    struct TrackingExclusions Exclusions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry.h>
#endif
#undef IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields_FWDDECL)
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_RecordableTrackingEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
