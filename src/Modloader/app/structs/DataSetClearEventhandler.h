#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataSetClearEventhandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataSetClearEventhandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataSetClearEventhandler_DEFINED)
#include <Modloader/app/structs/DataSetClearEventhandler__Fields.h>
#if defined(IL2CPP_STRUCT_DataSetClearEventhandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DataSetClearEventhandler_DEFINED
struct DataSetClearEventhandler__Class;
struct DataSetClearEventhandler {
    struct DataSetClearEventhandler__Class* klass;
    MonitorData* monitor;
    struct DataSetClearEventhandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataSetClearEventhandler_FWDDECL)
#define IL2CPP_STRUCT_DataSetClearEventhandler_FWDDECL
#include <Modloader/app/structs/DataSetClearEventhandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DataSetClearEventhandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataSetClearEventhandler_DEFINED) && !defined(IL2CPP_STRUCT_DataSetClearEventhandler_FWDDECL)
#include <Modloader/app/structs/DataSetClearEventhandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataSetClearEventhandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
