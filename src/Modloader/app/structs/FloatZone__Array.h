#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatZone__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatZone__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatZone__Array_DEFINED)
#define IL2CPP_STRUCT_FloatZone__Array_DEFINED
struct FloatZone__Array__Class;
struct FloatZone;
struct FloatZone__Array {
    struct FloatZone__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct FloatZone* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_FloatZone__Array_FWDDECL)
#define IL2CPP_STRUCT_FloatZone__Array_FWDDECL
#include <Modloader/app/structs/FloatZone.h>
#include <Modloader/app/structs/FloatZone__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatZone__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatZone__Array_DEFINED) && !defined(IL2CPP_STRUCT_FloatZone__Array_FWDDECL)
#include <Modloader/app/structs/FloatZone__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatZone__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
