#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoSoulFlameZone__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoSoulFlameZone__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoSoulFlameZone__Array_DEFINED)
#define IL2CPP_STRUCT_NoSoulFlameZone__Array_DEFINED
struct NoSoulFlameZone__Array__Class;
struct NoSoulFlameZone;
struct NoSoulFlameZone__Array {
    struct NoSoulFlameZone__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct NoSoulFlameZone* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_NoSoulFlameZone__Array_FWDDECL)
#define IL2CPP_STRUCT_NoSoulFlameZone__Array_FWDDECL
#include <Modloader/app/structs/NoSoulFlameZone.h>
#include <Modloader/app/structs/NoSoulFlameZone__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_NoSoulFlameZone__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoSoulFlameZone__Array_DEFINED) && !defined(IL2CPP_STRUCT_NoSoulFlameZone__Array_FWDDECL)
#include <Modloader/app/structs/NoSoulFlameZone__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoSoulFlameZone__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
