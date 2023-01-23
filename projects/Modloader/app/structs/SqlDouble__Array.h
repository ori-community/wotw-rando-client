#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDouble__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDouble__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDouble__Array_DEFINED)
#include <Modloader/app/structs/SqlDouble.h>
#if defined(IL2CPP_STRUCT_SqlDouble_DEFINED)
#define IL2CPP_STRUCT_SqlDouble__Array_DEFINED
struct SqlDouble__Array__Class;
struct SqlDouble__Array {
    struct SqlDouble__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SqlDouble vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlDouble__Array_FWDDECL)
#define IL2CPP_STRUCT_SqlDouble__Array_FWDDECL
#include <Modloader/app/structs/SqlDouble__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlDouble__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDouble__Array_DEFINED) && !defined(IL2CPP_STRUCT_SqlDouble__Array_FWDDECL)
#include <Modloader/app/structs/SqlDouble__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDouble__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
