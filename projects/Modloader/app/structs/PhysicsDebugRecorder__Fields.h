#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_DEFINED
struct List_1_PhysicsDebugTools_ExtraEvent_;
struct List_1_PhysicsDebugTools_Record_;
struct PhysicsDebugRecorder__Fields {
    struct MonoBehaviour__Fields _;
    bool ShowMinRadius;
    bool ShowAll;
    int32_t ShowIndex;
    bool ShowSpecificRecord;
    int32_t ShowRecordIndex;
    bool RecordExternalForcesSummary;
    struct List_1_PhysicsDebugTools_ExtraEvent_* m_events;
    struct List_1_PhysicsDebugTools_Record_* m_records;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PhysicsDebugTools_ExtraEvent_.h>
#include <Modloader/app/structs/List_1_PhysicsDebugTools_Record_.h>
#endif
#undef IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsDebugRecorder__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsDebugRecorder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsDebugRecorder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
