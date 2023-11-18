#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumnChangeEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumnChangeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventHandler_DEFINED)
#include <Modloader/app/structs/DataColumnChangeEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DataColumnChangeEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DataColumnChangeEventHandler_DEFINED
struct DataColumnChangeEventHandler__Class;
struct DataColumnChangeEventHandler {
    struct DataColumnChangeEventHandler__Class* klass;
    MonitorData* monitor;
    struct DataColumnChangeEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DataColumnChangeEventHandler_FWDDECL
#include <Modloader/app/structs/DataColumnChangeEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DataColumnChangeEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnChangeEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DataColumnChangeEventHandler_FWDDECL)
#include <Modloader/app/structs/DataColumnChangeEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumnChangeEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
