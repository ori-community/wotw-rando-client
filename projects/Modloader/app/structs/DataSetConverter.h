#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataSetConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataSetConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataSetConverter_DEFINED)
#define IL2CPP_STRUCT_DataSetConverter_DEFINED
struct DataSetConverter__Class;
struct DataSetConverter {
    struct DataSetConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DataSetConverter_FWDDECL)
#define IL2CPP_STRUCT_DataSetConverter_FWDDECL
#include <Modloader/app/structs/DataSetConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_DataSetConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataSetConverter_DEFINED) && !defined(IL2CPP_STRUCT_DataSetConverter_FWDDECL)
#include <Modloader/app/structs/DataSetConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataSetConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
