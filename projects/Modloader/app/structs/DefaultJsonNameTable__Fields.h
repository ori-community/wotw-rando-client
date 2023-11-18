#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultJsonNameTable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultJsonNameTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultJsonNameTable__Fields_DEFINED
struct DefaultJsonNameTable_Entry__Array;
struct __declspec(align(8)) DefaultJsonNameTable__Fields {
    int32_t _count;
    struct DefaultJsonNameTable_Entry__Array* _entries;
    int32_t _mask;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable__Fields_FWDDECL)
#define IL2CPP_STRUCT_DefaultJsonNameTable__Fields_FWDDECL
#include <Modloader/app/structs/DefaultJsonNameTable_Entry__Array.h>
#endif
#undef IL2CPP_STRUCT_DefaultJsonNameTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DefaultJsonNameTable__Fields_FWDDECL)
#include <Modloader/app/structs/DefaultJsonNameTable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultJsonNameTable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
