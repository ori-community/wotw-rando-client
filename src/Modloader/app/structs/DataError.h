#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataError_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataError_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataError_DEFINED)
#include <Modloader/app/structs/DataError__Fields.h>
#if defined(IL2CPP_STRUCT_DataError__Fields_DEFINED)
#define IL2CPP_STRUCT_DataError_DEFINED
struct DataError__Class;
struct DataError {
    struct DataError__Class* klass;
    MonitorData* monitor;
    struct DataError__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataError_FWDDECL)
#define IL2CPP_STRUCT_DataError_FWDDECL
#include <Modloader/app/structs/DataError__Class.h>
#endif
#undef IL2CPP_STRUCT_DataError_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataError_DEFINED) && !defined(IL2CPP_STRUCT_DataError_FWDDECL)
#include <Modloader/app/structs/DataError.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataError.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
