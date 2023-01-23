#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncodingTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncodingTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingTable_DEFINED)
#define IL2CPP_STRUCT_EncodingTable_DEFINED
struct EncodingTable__Class;
struct EncodingTable {
    struct EncodingTable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EncodingTable_FWDDECL)
#define IL2CPP_STRUCT_EncodingTable_FWDDECL
#include <Modloader/app/structs/EncodingTable__Class.h>
#endif
#undef IL2CPP_STRUCT_EncodingTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingTable_DEFINED) && !defined(IL2CPP_STRUCT_EncodingTable_FWDDECL)
#include <Modloader/app/structs/EncodingTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncodingTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
