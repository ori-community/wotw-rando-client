#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonNameTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonNameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonNameTable_DEFINED)
#define IL2CPP_STRUCT_JsonNameTable_DEFINED
struct JsonNameTable__Class;
struct JsonNameTable {
    struct JsonNameTable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonNameTable_FWDDECL)
#define IL2CPP_STRUCT_JsonNameTable_FWDDECL
#include <Modloader/app/structs/JsonNameTable__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonNameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonNameTable_DEFINED) && !defined(IL2CPP_STRUCT_JsonNameTable_FWDDECL)
#include <Modloader/app/structs/JsonNameTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonNameTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
