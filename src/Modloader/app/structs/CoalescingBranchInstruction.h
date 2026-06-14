#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CoalescingBranchInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CoalescingBranchInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CoalescingBranchInstruction_DEFINED)
#include <Modloader/app/structs/CoalescingBranchInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_CoalescingBranchInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_CoalescingBranchInstruction_DEFINED
struct CoalescingBranchInstruction__Class;
struct CoalescingBranchInstruction {
    struct CoalescingBranchInstruction__Class* klass;
    MonitorData* monitor;
    struct CoalescingBranchInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CoalescingBranchInstruction_FWDDECL)
#define IL2CPP_STRUCT_CoalescingBranchInstruction_FWDDECL
#include <Modloader/app/structs/CoalescingBranchInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_CoalescingBranchInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CoalescingBranchInstruction_DEFINED) && !defined(IL2CPP_STRUCT_CoalescingBranchInstruction_FWDDECL)
#include <Modloader/app/structs/CoalescingBranchInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CoalescingBranchInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
