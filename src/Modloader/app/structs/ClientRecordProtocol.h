#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientRecordProtocol_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientRecordProtocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientRecordProtocol_DEFINED)
#include <Modloader/app/structs/ClientRecordProtocol__Fields.h>
#if defined(IL2CPP_STRUCT_ClientRecordProtocol__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientRecordProtocol_DEFINED
struct ClientRecordProtocol__Class;
struct ClientRecordProtocol {
    struct ClientRecordProtocol__Class* klass;
    MonitorData* monitor;
    struct ClientRecordProtocol__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientRecordProtocol_FWDDECL)
#define IL2CPP_STRUCT_ClientRecordProtocol_FWDDECL
#include <Modloader/app/structs/ClientRecordProtocol__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientRecordProtocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientRecordProtocol_DEFINED) && !defined(IL2CPP_STRUCT_ClientRecordProtocol_FWDDECL)
#include <Modloader/app/structs/ClientRecordProtocol.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientRecordProtocol.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
