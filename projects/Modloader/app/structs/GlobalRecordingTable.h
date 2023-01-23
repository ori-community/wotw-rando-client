#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalRecordingTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalRecordingTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_DEFINED)
#include <Modloader/app/structs/GlobalRecordingTable__Fields.h>
#if defined(IL2CPP_STRUCT_GlobalRecordingTable__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalRecordingTable_DEFINED
struct GlobalRecordingTable__Class;
struct GlobalRecordingTable {
    struct GlobalRecordingTable__Class* klass;
    MonitorData* monitor;
    struct GlobalRecordingTable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_FWDDECL)
#define IL2CPP_STRUCT_GlobalRecordingTable_FWDDECL
#include <Modloader/app/structs/GlobalRecordingTable__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalRecordingTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalRecordingTable_DEFINED) && !defined(IL2CPP_STRUCT_GlobalRecordingTable_FWDDECL)
#include <Modloader/app/structs/GlobalRecordingTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalRecordingTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
