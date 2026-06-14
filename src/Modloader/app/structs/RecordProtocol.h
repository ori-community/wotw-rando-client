#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordProtocol_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordProtocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordProtocol_DEFINED)
#include <Modloader/app/structs/RecordProtocol__Fields.h>
#if defined(IL2CPP_STRUCT_RecordProtocol__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordProtocol_DEFINED
struct RecordProtocol__Class;
struct RecordProtocol {
    struct RecordProtocol__Class* klass;
    MonitorData* monitor;
    struct RecordProtocol__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordProtocol_FWDDECL)
#define IL2CPP_STRUCT_RecordProtocol_FWDDECL
#include <Modloader/app/structs/RecordProtocol__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordProtocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordProtocol_DEFINED) && !defined(IL2CPP_STRUCT_RecordProtocol_FWDDECL)
#include <Modloader/app/structs/RecordProtocol.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordProtocol.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
