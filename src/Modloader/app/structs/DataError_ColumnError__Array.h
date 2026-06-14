#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataError_ColumnError__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataError_ColumnError__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataError_ColumnError__Array_DEFINED)
#include <Modloader/app/structs/DataError_ColumnError.h>
#if defined(IL2CPP_STRUCT_DataError_ColumnError_DEFINED)
#define IL2CPP_STRUCT_DataError_ColumnError__Array_DEFINED
struct DataError_ColumnError__Array__Class;
struct DataError_ColumnError__Array {
    struct DataError_ColumnError__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct DataError_ColumnError vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataError_ColumnError__Array_FWDDECL)
#define IL2CPP_STRUCT_DataError_ColumnError__Array_FWDDECL
#include <Modloader/app/structs/DataError_ColumnError__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_DataError_ColumnError__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataError_ColumnError__Array_DEFINED) && !defined(IL2CPP_STRUCT_DataError_ColumnError__Array_FWDDECL)
#include <Modloader/app/structs/DataError_ColumnError__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataError_ColumnError__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
