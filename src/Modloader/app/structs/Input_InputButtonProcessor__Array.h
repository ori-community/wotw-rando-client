#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_InputButtonProcessor__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_InputButtonProcessor__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Array_DEFINED)
#define IL2CPP_STRUCT_Input_InputButtonProcessor__Array_DEFINED
struct Input_InputButtonProcessor__Array__Class;
struct Input_InputButtonProcessor;
struct Input_InputButtonProcessor__Array {
    struct Input_InputButtonProcessor__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct Input_InputButtonProcessor* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Array_FWDDECL)
#define IL2CPP_STRUCT_Input_InputButtonProcessor__Array_FWDDECL
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/Input_InputButtonProcessor__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_Input_InputButtonProcessor__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Array_DEFINED) && !defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Array_FWDDECL)
#include <Modloader/app/structs/Input_InputButtonProcessor__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_InputButtonProcessor__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
