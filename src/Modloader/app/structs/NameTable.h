#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameTable_DEFINED)
#include <Modloader/app/structs/NameTable__Fields.h>
#if defined(IL2CPP_STRUCT_NameTable__Fields_DEFINED)
#define IL2CPP_STRUCT_NameTable_DEFINED
struct NameTable__Class;
struct NameTable {
    struct NameTable__Class* klass;
    MonitorData* monitor;
    struct NameTable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameTable_FWDDECL)
#define IL2CPP_STRUCT_NameTable_FWDDECL
#include <Modloader/app/structs/NameTable__Class.h>
#endif
#undef IL2CPP_STRUCT_NameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameTable_DEFINED) && !defined(IL2CPP_STRUCT_NameTable_FWDDECL)
#include <Modloader/app/structs/NameTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
