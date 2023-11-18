#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultJsonNameTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultJsonNameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable_DEFINED)
#include <Modloader/app/structs/DefaultJsonNameTable__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultJsonNameTable__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultJsonNameTable_DEFINED
struct DefaultJsonNameTable__Class;
struct DefaultJsonNameTable {
    struct DefaultJsonNameTable__Class* klass;
    MonitorData* monitor;
    struct DefaultJsonNameTable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable_FWDDECL)
#define IL2CPP_STRUCT_DefaultJsonNameTable_FWDDECL
#include <Modloader/app/structs/DefaultJsonNameTable__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultJsonNameTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable_DEFINED) && !defined(IL2CPP_STRUCT_DefaultJsonNameTable_FWDDECL)
#include <Modloader/app/structs/DefaultJsonNameTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultJsonNameTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
