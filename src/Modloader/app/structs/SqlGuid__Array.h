#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlGuid__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlGuid__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuid__Array_DEFINED)
#include <Modloader/app/structs/SqlGuid.h>
#if defined(IL2CPP_STRUCT_SqlGuid_DEFINED)
#define IL2CPP_STRUCT_SqlGuid__Array_DEFINED
struct SqlGuid__Array__Class;
struct SqlGuid__Array {
    struct SqlGuid__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SqlGuid vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlGuid__Array_FWDDECL)
#define IL2CPP_STRUCT_SqlGuid__Array_FWDDECL
#include <Modloader/app/structs/SqlGuid__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlGuid__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlGuid__Array_DEFINED) && !defined(IL2CPP_STRUCT_SqlGuid__Array_FWDDECL)
#include <Modloader/app/structs/SqlGuid__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlGuid__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
