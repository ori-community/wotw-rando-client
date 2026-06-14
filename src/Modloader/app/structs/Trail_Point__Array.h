#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trail_Point__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trail_Point__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_Point__Array_DEFINED)
#include <Modloader/app/structs/Trail_Point.h>
#if defined(IL2CPP_STRUCT_Trail_Point_DEFINED)
#define IL2CPP_STRUCT_Trail_Point__Array_DEFINED
struct Trail_Point__Array__Class;
struct Trail_Point__Array {
    struct Trail_Point__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Trail_Point vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trail_Point__Array_FWDDECL)
#define IL2CPP_STRUCT_Trail_Point__Array_FWDDECL
#include <Modloader/app/structs/Trail_Point__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Trail_Point__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_Point__Array_DEFINED) && !defined(IL2CPP_STRUCT_Trail_Point__Array_FWDDECL)
#include <Modloader/app/structs/Trail_Point__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trail_Point__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
