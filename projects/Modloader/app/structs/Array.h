#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_DEFINED)
#define IL2CPP_STRUCT_Array_DEFINED
struct Array__Class;
struct Array {
    struct Array__Class* klass;
    MonitorData* monitor;
    struct Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    void* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Array_FWDDECL)
#define IL2CPP_STRUCT_Array_FWDDECL
#include <Modloader/app/structs/Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Array_DEFINED) && !defined(IL2CPP_STRUCT_Array_FWDDECL)
#include <Modloader/app/structs/Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
