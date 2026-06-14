#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameTable_Entry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameTable_Entry_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameTable_Entry_DEFINED)
#include <Modloader/app/structs/NameTable_Entry__Fields.h>
#if defined(IL2CPP_STRUCT_NameTable_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_NameTable_Entry_DEFINED
struct NameTable_Entry__Class;
struct NameTable_Entry {
    struct NameTable_Entry__Class* klass;
    MonitorData* monitor;
    struct NameTable_Entry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameTable_Entry_FWDDECL)
#define IL2CPP_STRUCT_NameTable_Entry_FWDDECL
#include <Modloader/app/structs/NameTable_Entry__Class.h>
#endif
#undef IL2CPP_STRUCT_NameTable_Entry_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameTable_Entry_DEFINED) && !defined(IL2CPP_STRUCT_NameTable_Entry_FWDDECL)
#include <Modloader/app/structs/NameTable_Entry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameTable_Entry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
