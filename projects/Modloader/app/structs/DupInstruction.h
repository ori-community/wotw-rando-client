#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DupInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DupInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DupInstruction_DEFINED)
#define IL2CPP_STRUCT_DupInstruction_DEFINED
struct DupInstruction__Class;
struct DupInstruction {
    struct DupInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DupInstruction_FWDDECL)
#define IL2CPP_STRUCT_DupInstruction_FWDDECL
#include <Modloader/app/structs/DupInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_DupInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DupInstruction_DEFINED) && !defined(IL2CPP_STRUCT_DupInstruction_FWDDECL)
#include <Modloader/app/structs/DupInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DupInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
