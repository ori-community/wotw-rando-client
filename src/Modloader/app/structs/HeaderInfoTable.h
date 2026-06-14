#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderInfoTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderInfoTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderInfoTable_DEFINED)
#define IL2CPP_STRUCT_HeaderInfoTable_DEFINED
struct HeaderInfoTable__Class;
struct HeaderInfoTable {
    struct HeaderInfoTable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HeaderInfoTable_FWDDECL)
#define IL2CPP_STRUCT_HeaderInfoTable_FWDDECL
#include <Modloader/app/structs/HeaderInfoTable__Class.h>
#endif
#undef IL2CPP_STRUCT_HeaderInfoTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderInfoTable_DEFINED) && !defined(IL2CPP_STRUCT_HeaderInfoTable_FWDDECL)
#include <Modloader/app/structs/HeaderInfoTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderInfoTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
