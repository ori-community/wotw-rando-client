#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadType__Enum__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadType__Enum__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadType__Enum__Array_DEFINED)
#include <Modloader/app/structs/ReadType__Enum.h>
#if defined(IL2CPP_STRUCT_ReadType__Enum_DEFINED)
#define IL2CPP_STRUCT_ReadType__Enum__Array_DEFINED
struct ReadType__Enum__Array__Class;
struct ReadType__Enum__Array {
    struct ReadType__Enum__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    ReadType__Enum vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadType__Enum__Array_FWDDECL)
#define IL2CPP_STRUCT_ReadType__Enum__Array_FWDDECL
#include <Modloader/app/structs/ReadType__Enum__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ReadType__Enum__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadType__Enum__Array_DEFINED) && !defined(IL2CPP_STRUCT_ReadType__Enum__Array_FWDDECL)
#include <Modloader/app/structs/ReadType__Enum__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadType__Enum__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
