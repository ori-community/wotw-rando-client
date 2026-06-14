#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowChangeEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowChangeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowChangeEventHandler_DEFINED)
#include <Modloader/app/structs/DataRowChangeEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DataRowChangeEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowChangeEventHandler_DEFINED
struct DataRowChangeEventHandler__Class;
struct DataRowChangeEventHandler {
    struct DataRowChangeEventHandler__Class* klass;
    MonitorData* monitor;
    struct DataRowChangeEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRowChangeEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DataRowChangeEventHandler_FWDDECL
#include <Modloader/app/structs/DataRowChangeEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRowChangeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowChangeEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DataRowChangeEventHandler_FWDDECL)
#include <Modloader/app/structs/DataRowChangeEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowChangeEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
