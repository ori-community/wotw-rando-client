#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubInstruction_SubDouble_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubInstruction_SubDouble_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubInstruction_SubDouble_DEFINED)
#define IL2CPP_STRUCT_SubInstruction_SubDouble_DEFINED
struct SubInstruction_SubDouble__Class;
struct SubInstruction_SubDouble {
    struct SubInstruction_SubDouble__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SubInstruction_SubDouble_FWDDECL)
#define IL2CPP_STRUCT_SubInstruction_SubDouble_FWDDECL
#include <Modloader/app/structs/SubInstruction_SubDouble__Class.h>
#endif
#undef IL2CPP_STRUCT_SubInstruction_SubDouble_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubInstruction_SubDouble_DEFINED) && !defined(IL2CPP_STRUCT_SubInstruction_SubDouble_FWDDECL)
#include <Modloader/app/structs/SubInstruction_SubDouble.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubInstruction_SubDouble.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
