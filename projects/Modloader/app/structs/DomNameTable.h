#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DomNameTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DomNameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DomNameTable_DEFINED)
#include <Modloader/app/structs/DomNameTable__Fields.h>
#if defined(IL2CPP_STRUCT_DomNameTable__Fields_DEFINED)
#define IL2CPP_STRUCT_DomNameTable_DEFINED
struct DomNameTable__Class;
struct DomNameTable {
    struct DomNameTable__Class* klass;
    MonitorData* monitor;
    struct DomNameTable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DomNameTable_FWDDECL)
#define IL2CPP_STRUCT_DomNameTable_FWDDECL
#include <Modloader/app/structs/DomNameTable__Class.h>
#endif
#undef IL2CPP_STRUCT_DomNameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DomNameTable_DEFINED) && !defined(IL2CPP_STRUCT_DomNameTable_FWDDECL)
#include <Modloader/app/structs/DomNameTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DomNameTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
