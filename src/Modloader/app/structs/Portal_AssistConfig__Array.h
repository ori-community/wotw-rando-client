#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Portal_AssistConfig__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Portal_AssistConfig__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig__Array_DEFINED)
#define IL2CPP_STRUCT_Portal_AssistConfig__Array_DEFINED
struct Portal_AssistConfig__Array__Class;
struct Portal_AssistConfig;
struct Portal_AssistConfig__Array {
    struct Portal_AssistConfig__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Portal_AssistConfig* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig__Array_FWDDECL)
#define IL2CPP_STRUCT_Portal_AssistConfig__Array_FWDDECL
#include <Modloader/app/structs/Portal_AssistConfig.h>
#include <Modloader/app/structs/Portal_AssistConfig__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Portal_AssistConfig__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig__Array_DEFINED) && !defined(IL2CPP_STRUCT_Portal_AssistConfig__Array_FWDDECL)
#include <Modloader/app/structs/Portal_AssistConfig__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Portal_AssistConfig__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
