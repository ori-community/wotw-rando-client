#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerRecordProtocol_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerRecordProtocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerRecordProtocol_DEFINED)
#include <Modloader/app/structs/ServerRecordProtocol__Fields.h>
#if defined(IL2CPP_STRUCT_ServerRecordProtocol__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerRecordProtocol_DEFINED
struct ServerRecordProtocol__Class;
struct ServerRecordProtocol {
    struct ServerRecordProtocol__Class* klass;
    MonitorData* monitor;
    struct ServerRecordProtocol__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerRecordProtocol_FWDDECL)
#define IL2CPP_STRUCT_ServerRecordProtocol_FWDDECL
#include <Modloader/app/structs/ServerRecordProtocol__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerRecordProtocol_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerRecordProtocol_DEFINED) && !defined(IL2CPP_STRUCT_ServerRecordProtocol_FWDDECL)
#include <Modloader/app/structs/ServerRecordProtocol.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerRecordProtocol.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
