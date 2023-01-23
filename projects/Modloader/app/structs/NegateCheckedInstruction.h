#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NegateCheckedInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NegateCheckedInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegateCheckedInstruction_DEFINED)
#define IL2CPP_STRUCT_NegateCheckedInstruction_DEFINED
struct NegateCheckedInstruction__Class;
struct NegateCheckedInstruction {
    struct NegateCheckedInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NegateCheckedInstruction_FWDDECL)
#define IL2CPP_STRUCT_NegateCheckedInstruction_FWDDECL
#include <Modloader/app/structs/NegateCheckedInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NegateCheckedInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegateCheckedInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NegateCheckedInstruction_FWDDECL)
#include <Modloader/app/structs/NegateCheckedInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NegateCheckedInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
