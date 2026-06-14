#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallInstruction_DEFINED)
#define IL2CPP_STRUCT_CallInstruction_DEFINED
struct CallInstruction__Class;
struct CallInstruction {
    struct CallInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CallInstruction_FWDDECL)
#define IL2CPP_STRUCT_CallInstruction_FWDDECL
#include <Modloader/app/structs/CallInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_CallInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallInstruction_DEFINED) && !defined(IL2CPP_STRUCT_CallInstruction_FWDDECL)
#include <Modloader/app/structs/CallInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
