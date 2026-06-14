#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITask__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITask__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITask__Array_DEFINED)
#define IL2CPP_STRUCT_ITask__Array_DEFINED
struct ITask__Array__Class;
struct ITask;
struct ITask__Array {
    struct ITask__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ITask* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_ITask__Array_FWDDECL)
#define IL2CPP_STRUCT_ITask__Array_FWDDECL
#include <Modloader/app/structs/ITask.h>
#include <Modloader/app/structs/ITask__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ITask__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITask__Array_DEFINED) && !defined(IL2CPP_STRUCT_ITask__Array_FWDDECL)
#include <Modloader/app/structs/ITask__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITask__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
