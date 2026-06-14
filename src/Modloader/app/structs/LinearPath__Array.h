#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinearPath__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinearPath__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinearPath__Array_DEFINED)
#define IL2CPP_STRUCT_LinearPath__Array_DEFINED
struct LinearPath__Array__Class;
struct LinearPath;
struct LinearPath__Array {
    struct LinearPath__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct LinearPath* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_LinearPath__Array_FWDDECL)
#define IL2CPP_STRUCT_LinearPath__Array_FWDDECL
#include <Modloader/app/structs/LinearPath.h>
#include <Modloader/app/structs/LinearPath__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_LinearPath__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinearPath__Array_DEFINED) && !defined(IL2CPP_STRUCT_LinearPath__Array_FWDDECL)
#include <Modloader/app/structs/LinearPath__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinearPath__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
