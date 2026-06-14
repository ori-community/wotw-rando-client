#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataCollector__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataCollector__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataCollector__Boxed_DEFINED)
#include <Modloader/app/structs/DataCollector.h>
#if defined(IL2CPP_STRUCT_DataCollector_DEFINED)
#define IL2CPP_STRUCT_DataCollector__Boxed_DEFINED
struct DataCollector__Class;
struct DataCollector__Boxed {
    struct DataCollector__Class* klass;
    MonitorData* monitor;
    struct DataCollector fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataCollector__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DataCollector__Boxed_FWDDECL
#include <Modloader/app/structs/DataCollector__Class.h>
#endif
#undef IL2CPP_STRUCT_DataCollector__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataCollector__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DataCollector__Boxed_FWDDECL)
#include <Modloader/app/structs/DataCollector__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataCollector__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
