#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterFaultInstruction__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterFaultInstruction__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterFaultInstruction__Array_DEFINED)
#define IL2CPP_STRUCT_EnterFaultInstruction__Array_DEFINED
struct EnterFaultInstruction__Array__Class;
struct EnterFaultInstruction;
struct EnterFaultInstruction__Array {
    struct EnterFaultInstruction__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct EnterFaultInstruction* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_EnterFaultInstruction__Array_FWDDECL)
#define IL2CPP_STRUCT_EnterFaultInstruction__Array_FWDDECL
#include <Modloader/app/structs/EnterFaultInstruction.h>
#include <Modloader/app/structs/EnterFaultInstruction__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_EnterFaultInstruction__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterFaultInstruction__Array_DEFINED) && !defined(IL2CPP_STRUCT_EnterFaultInstruction__Array_FWDDECL)
#include <Modloader/app/structs/EnterFaultInstruction__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterFaultInstruction__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
