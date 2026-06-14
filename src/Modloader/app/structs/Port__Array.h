#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Port__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Port__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Port__Array_DEFINED)
#define IL2CPP_STRUCT_Port__Array_DEFINED
struct Port__Array__Class;
struct Port;
struct Port__Array {
    struct Port__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Port* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Port__Array_FWDDECL)
#define IL2CPP_STRUCT_Port__Array_FWDDECL
#include <Modloader/app/structs/Port.h>
#include <Modloader/app/structs/Port__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Port__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Port__Array_DEFINED) && !defined(IL2CPP_STRUCT_Port__Array_FWDDECL)
#include <Modloader/app/structs/Port__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Port__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
