#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_DEFINED)
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry__Fields.h>
#if defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_DEFINED
struct GlobalRecordingTable_RecordableEntry__Class;
struct GlobalRecordingTable_RecordableEntry {
    struct GlobalRecordingTable_RecordableEntry__Class* klass;
    MonitorData* monitor;
    struct GlobalRecordingTable_RecordableEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_FWDDECL)
#define IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_FWDDECL
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_DEFINED) && !defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry_FWDDECL)
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
