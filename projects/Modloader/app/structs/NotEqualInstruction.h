#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotEqualInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotEqualInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotEqualInstruction_DEFINED)
#define IL2CPP_STRUCT_NotEqualInstruction_DEFINED
struct NotEqualInstruction__Class;
struct NotEqualInstruction {
    struct NotEqualInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NotEqualInstruction_FWDDECL)
#define IL2CPP_STRUCT_NotEqualInstruction_FWDDECL
#include <Modloader/app/structs/NotEqualInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NotEqualInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotEqualInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NotEqualInstruction_FWDDECL)
#include <Modloader/app/structs/NotEqualInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotEqualInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
