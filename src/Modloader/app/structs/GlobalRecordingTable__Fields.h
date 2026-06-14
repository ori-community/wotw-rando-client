#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalRecordingTable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalRecordingTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalRecordingTable__Fields_DEFINED
struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_;
struct Dictionary_2_System_Int64_EntityPlaceholder_;
struct __declspec(align(8)) GlobalRecordingTable__Fields {
    struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_* m_entryMapRecordingId;
    struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_* m_entryMapInstanceId;
    struct Dictionary_2_System_Int64_EntityPlaceholder_* m_placeholders;
};
#endif
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable__Fields_FWDDECL)
#define IL2CPP_STRUCT_GlobalRecordingTable__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int64_EntityPlaceholder_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_.h>
#endif
#undef IL2CPP_STRUCT_GlobalRecordingTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GlobalRecordingTable__Fields_FWDDECL)
#include <Modloader/app/structs/GlobalRecordingTable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalRecordingTable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
