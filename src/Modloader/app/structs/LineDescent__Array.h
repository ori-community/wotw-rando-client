#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineDescent__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineDescent__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineDescent__Array_DEFINED)
#include <Modloader/app/structs/LineDescent.h>
#if defined(IL2CPP_STRUCT_LineDescent_DEFINED)
#define IL2CPP_STRUCT_LineDescent__Array_DEFINED
struct LineDescent__Array__Class;
struct LineDescent__Array {
    struct LineDescent__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct LineDescent vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineDescent__Array_FWDDECL)
#define IL2CPP_STRUCT_LineDescent__Array_FWDDECL
#include <Modloader/app/structs/LineDescent__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_LineDescent__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineDescent__Array_DEFINED) && !defined(IL2CPP_STRUCT_LineDescent__Array_FWDDECL)
#include <Modloader/app/structs/LineDescent__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineDescent__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
