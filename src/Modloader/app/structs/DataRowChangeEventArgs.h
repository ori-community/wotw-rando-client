#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowChangeEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowChangeEventArgs_DEFINED)
#include <Modloader/app/structs/DataRowChangeEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DataRowChangeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowChangeEventArgs_DEFINED
struct DataRowChangeEventArgs__Class;
struct DataRowChangeEventArgs {
    struct DataRowChangeEventArgs__Class* klass;
    MonitorData* monitor;
    struct DataRowChangeEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRowChangeEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DataRowChangeEventArgs_FWDDECL
#include <Modloader/app/structs/DataRowChangeEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRowChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowChangeEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DataRowChangeEventArgs_FWDDECL)
#include <Modloader/app/structs/DataRowChangeEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowChangeEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
