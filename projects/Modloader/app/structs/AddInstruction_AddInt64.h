#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddInstruction_AddInt64_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddInstruction_AddInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddInstruction_AddInt64_DEFINED)
#define IL2CPP_STRUCT_AddInstruction_AddInt64_DEFINED
struct AddInstruction_AddInt64__Class;
struct AddInstruction_AddInt64 {
    struct AddInstruction_AddInt64__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AddInstruction_AddInt64_FWDDECL)
#define IL2CPP_STRUCT_AddInstruction_AddInt64_FWDDECL
#include <Modloader/app/structs/AddInstruction_AddInt64__Class.h>
#endif
#undef IL2CPP_STRUCT_AddInstruction_AddInt64_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddInstruction_AddInt64_DEFINED) && !defined(IL2CPP_STRUCT_AddInstruction_AddInt64_FWDDECL)
#include <Modloader/app/structs/AddInstruction_AddInt64.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddInstruction_AddInt64.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
