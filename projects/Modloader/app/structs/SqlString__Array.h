#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlString__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlString__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlString__Array_DEFINED)
#include <Modloader/app/structs/SqlString.h>
#if defined(IL2CPP_STRUCT_SqlString_DEFINED)
#define IL2CPP_STRUCT_SqlString__Array_DEFINED
struct SqlString__Array__Class;
struct SqlString__Array {
    struct SqlString__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SqlString vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlString__Array_FWDDECL)
#define IL2CPP_STRUCT_SqlString__Array_FWDDECL
#include <Modloader/app/structs/SqlString__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlString__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlString__Array_DEFINED) && !defined(IL2CPP_STRUCT_SqlString__Array_FWDDECL)
#include <Modloader/app/structs/SqlString__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlString__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
