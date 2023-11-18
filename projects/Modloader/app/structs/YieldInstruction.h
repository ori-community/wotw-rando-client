#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_YieldInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_YieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_YieldInstruction_DEFINED)
#define IL2CPP_STRUCT_YieldInstruction_DEFINED
struct YieldInstruction__Class;
struct YieldInstruction {
    struct YieldInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_YieldInstruction_FWDDECL)
#define IL2CPP_STRUCT_YieldInstruction_FWDDECL
#include <Modloader/app/structs/YieldInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_YieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_YieldInstruction_DEFINED) && !defined(IL2CPP_STRUCT_YieldInstruction_FWDDECL)
#include <Modloader/app/structs/YieldInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/YieldInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
