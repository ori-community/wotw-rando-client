#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumnChangeEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumnChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventArgs_DEFINED)
#include <Modloader/app/structs/DataColumnChangeEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DataColumnChangeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DataColumnChangeEventArgs_DEFINED
struct DataColumnChangeEventArgs__Class;
struct DataColumnChangeEventArgs {
    struct DataColumnChangeEventArgs__Class* klass;
    MonitorData* monitor;
    struct DataColumnChangeEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DataColumnChangeEventArgs_FWDDECL
#include <Modloader/app/structs/DataColumnChangeEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DataColumnChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DataColumnChangeEventArgs_FWDDECL)
#include <Modloader/app/structs/DataColumnChangeEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumnChangeEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
