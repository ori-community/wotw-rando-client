#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowCreatedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowCreatedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowCreatedEventHandler_DEFINED)
#include <Modloader/app/structs/DataRowCreatedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DataRowCreatedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowCreatedEventHandler_DEFINED
struct DataRowCreatedEventHandler__Class;
struct DataRowCreatedEventHandler {
    struct DataRowCreatedEventHandler__Class* klass;
    MonitorData* monitor;
    struct DataRowCreatedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRowCreatedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DataRowCreatedEventHandler_FWDDECL
#include <Modloader/app/structs/DataRowCreatedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DataRowCreatedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowCreatedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DataRowCreatedEventHandler_FWDDECL)
#include <Modloader/app/structs/DataRowCreatedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowCreatedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
