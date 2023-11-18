#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_DEFINED)
#define IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_DEFINED
struct DefaultJsonNameTable_Entry__Array__Class;
struct DefaultJsonNameTable_Entry;
struct DefaultJsonNameTable_Entry__Array {
    struct DefaultJsonNameTable_Entry__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct DefaultJsonNameTable_Entry* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_FWDDECL)
#define IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_FWDDECL
#include <Modloader/app/structs/DefaultJsonNameTable_Entry.h>
#include <Modloader/app/structs/DefaultJsonNameTable_Entry__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_DEFINED) && !defined(IL2CPP_STRUCT_DefaultJsonNameTable_Entry__Array_FWDDECL)
#include <Modloader/app/structs/DefaultJsonNameTable_Entry__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultJsonNameTable_Entry__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
