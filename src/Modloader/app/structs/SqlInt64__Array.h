#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlInt64__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlInt64__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt64__Array_DEFINED)
#include <Modloader/app/structs/SqlInt64.h>
#if defined(IL2CPP_STRUCT_SqlInt64_DEFINED)
#define IL2CPP_STRUCT_SqlInt64__Array_DEFINED
struct SqlInt64__Array__Class;
struct SqlInt64__Array {
    struct SqlInt64__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SqlInt64 vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlInt64__Array_FWDDECL)
#define IL2CPP_STRUCT_SqlInt64__Array_FWDDECL
#include <Modloader/app/structs/SqlInt64__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlInt64__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlInt64__Array_DEFINED) && !defined(IL2CPP_STRUCT_SqlInt64__Array_FWDDECL)
#include <Modloader/app/structs/SqlInt64__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlInt64__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
