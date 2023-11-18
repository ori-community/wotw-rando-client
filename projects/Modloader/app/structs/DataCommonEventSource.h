#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataCommonEventSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataCommonEventSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataCommonEventSource_DEFINED)
#include <Modloader/app/structs/DataCommonEventSource__Fields.h>
#if defined(IL2CPP_STRUCT_DataCommonEventSource__Fields_DEFINED)
#define IL2CPP_STRUCT_DataCommonEventSource_DEFINED
struct DataCommonEventSource__Class;
struct DataCommonEventSource {
    struct DataCommonEventSource__Class* klass;
    MonitorData* monitor;
    struct DataCommonEventSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataCommonEventSource_FWDDECL)
#define IL2CPP_STRUCT_DataCommonEventSource_FWDDECL
#include <Modloader/app/structs/DataCommonEventSource__Class.h>
#endif
#undef IL2CPP_STRUCT_DataCommonEventSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataCommonEventSource_DEFINED) && !defined(IL2CPP_STRUCT_DataCommonEventSource_FWDDECL)
#include <Modloader/app/structs/DataCommonEventSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataCommonEventSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
