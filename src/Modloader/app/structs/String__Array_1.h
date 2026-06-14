#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_String__Array_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_String__Array_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_String__Array_1_DEFINED)
#define IL2CPP_STRUCT_String__Array_1_DEFINED
struct String__Array_1__Class;
struct String;
struct String__Array_1 {
    struct String__Array_1__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct String* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_String__Array_1_FWDDECL)
#define IL2CPP_STRUCT_String__Array_1_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array_1__Class.h>
#endif
#undef IL2CPP_STRUCT_String__Array_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_String__Array_1_DEFINED) && !defined(IL2CPP_STRUCT_String__Array_1_FWDDECL)
#include <Modloader/app/structs/String__Array_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/String__Array_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
