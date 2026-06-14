#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Device__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Device__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Device__Array_DEFINED)
#define IL2CPP_STRUCT_Device__Array_DEFINED
struct Device__Array__Class;
struct Device;
struct Device__Array {
    struct Device__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Device* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Device__Array_FWDDECL)
#define IL2CPP_STRUCT_Device__Array_FWDDECL
#include <Modloader/app/structs/Device.h>
#include <Modloader/app/structs/Device__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Device__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Device__Array_DEFINED) && !defined(IL2CPP_STRUCT_Device__Array_FWDDECL)
#include <Modloader/app/structs/Device__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Device__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
