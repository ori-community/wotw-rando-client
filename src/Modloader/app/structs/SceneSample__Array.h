#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSample__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSample__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSample__Array_DEFINED)
#define IL2CPP_STRUCT_SceneSample__Array_DEFINED
struct SceneSample__Array__Class;
struct SceneSample;
struct SceneSample__Array {
    struct SceneSample__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SceneSample* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_SceneSample__Array_FWDDECL)
#define IL2CPP_STRUCT_SceneSample__Array_FWDDECL
#include <Modloader/app/structs/SceneSample.h>
#include <Modloader/app/structs/SceneSample__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneSample__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSample__Array_DEFINED) && !defined(IL2CPP_STRUCT_SceneSample__Array_FWDDECL)
#include <Modloader/app/structs/SceneSample__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSample__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
