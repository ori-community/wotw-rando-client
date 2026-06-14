#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IndexedBranchInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IndexedBranchInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexedBranchInstruction_DEFINED)
#include <Modloader/app/structs/IndexedBranchInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_IndexedBranchInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_IndexedBranchInstruction_DEFINED
struct IndexedBranchInstruction__Class;
struct IndexedBranchInstruction {
    struct IndexedBranchInstruction__Class* klass;
    MonitorData* monitor;
    struct IndexedBranchInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IndexedBranchInstruction_FWDDECL)
#define IL2CPP_STRUCT_IndexedBranchInstruction_FWDDECL
#include <Modloader/app/structs/IndexedBranchInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_IndexedBranchInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexedBranchInstruction_DEFINED) && !defined(IL2CPP_STRUCT_IndexedBranchInstruction_FWDDECL)
#include <Modloader/app/structs/IndexedBranchInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IndexedBranchInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
