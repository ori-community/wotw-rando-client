#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_DEFINED)
#include <Modloader/app/structs/RecordableIdData.h>
#if defined(IL2CPP_STRUCT_RecordableIdData_DEFINED)
#define IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_DEFINED
struct Component_1;
struct __declspec(align(8)) GlobalRecordingTable_RecordableEntry__Fields {
    struct RecordableIdData IdData;
    struct Component_1* Object;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_FWDDECL
#include <Modloader/app/structs/Component_1.h>
#endif
#undef IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GlobalRecordingTable_RecordableEntry__Fields_FWDDECL)
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalRecordingTable_RecordableEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
