#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostRecorder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_GhostRecorder__Fields_DEFINED
struct PreRecordingData;
struct GlobalRecordingTable;
struct GhostRecorderData;
struct String;
struct BinaryWriter;
struct List_1_IGhostRecorderPlugin_;
struct GhostCharacterData;
struct GhostRecorder__Fields {
    struct MonoBehaviour__Fields _;
    bool Enabled;
    int32_t CurrentFrameIndex;
    float Time;
    struct PreRecordingData* m_preRecordingData;
    struct GlobalRecordingTable* m_globalTable;
    int64_t m_previousCaret;
    float m_previousFrameTime;
    struct GhostRecorderData* GhostRecorderData;
    struct String* m_filePath;
    struct BinaryWriter* m_binaryWriter;
    struct List_1_IGhostRecorderPlugin_* m_plugins;
    struct GhostCharacterData* PreviousCharacterData;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostRecorder__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostRecorder__Fields_FWDDECL
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/GhostCharacterData.h>
#include <Modloader/app/structs/GhostRecorderData.h>
#include <Modloader/app/structs/GlobalRecordingTable.h>
#include <Modloader/app/structs/List_1_IGhostRecorderPlugin_.h>
#include <Modloader/app/structs/PreRecordingData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GhostRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostRecorder__Fields_FWDDECL)
#include <Modloader/app/structs/GhostRecorder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostRecorder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
