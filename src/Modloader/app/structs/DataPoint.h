#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataPoint_DEFINED)
#include <Modloader/app/structs/DataPoint__Fields.h>
#if defined(IL2CPP_STRUCT_DataPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_DataPoint_DEFINED
struct DataPoint__Class;
struct DataPoint {
    struct DataPoint__Class* klass;
    MonitorData* monitor;
    struct DataPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataPoint_FWDDECL)
#define IL2CPP_STRUCT_DataPoint_FWDDECL
#include <Modloader/app/structs/DataPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_DataPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataPoint_DEFINED) && !defined(IL2CPP_STRUCT_DataPoint_FWDDECL)
#include <Modloader/app/structs/DataPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
