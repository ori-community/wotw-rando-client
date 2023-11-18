#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubInstruction_SubSingle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubInstruction_SubSingle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubInstruction_SubSingle_DEFINED)
#define IL2CPP_STRUCT_SubInstruction_SubSingle_DEFINED
struct SubInstruction_SubSingle__Class;
struct SubInstruction_SubSingle {
    struct SubInstruction_SubSingle__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SubInstruction_SubSingle_FWDDECL)
#define IL2CPP_STRUCT_SubInstruction_SubSingle_FWDDECL
#include <Modloader/app/structs/SubInstruction_SubSingle__Class.h>
#endif
#undef IL2CPP_STRUCT_SubInstruction_SubSingle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubInstruction_SubSingle_DEFINED) && !defined(IL2CPP_STRUCT_SubInstruction_SubSingle_FWDDECL)
#include <Modloader/app/structs/SubInstruction_SubSingle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubInstruction_SubSingle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
