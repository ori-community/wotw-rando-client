#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackTrace__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackTrace__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackTrace__Array_DEFINED)
#define IL2CPP_STRUCT_StackTrace__Array_DEFINED
struct StackTrace__Array__Class;
struct StackTrace;
struct StackTrace__Array {
    struct StackTrace__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct StackTrace* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_StackTrace__Array_FWDDECL)
#define IL2CPP_STRUCT_StackTrace__Array_FWDDECL
#include <Modloader/app/structs/StackTrace.h>
#include <Modloader/app/structs/StackTrace__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_StackTrace__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackTrace__Array_DEFINED) && !defined(IL2CPP_STRUCT_StackTrace__Array_FWDDECL)
#include <Modloader/app/structs/StackTrace__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackTrace__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
