#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BranchInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BranchInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchInstruction__Fields_DEFINED)
#include <Modloader/app/structs/OffsetInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_BranchInstruction__Fields_DEFINED
struct BranchInstruction__Fields {
    struct OffsetInstruction__Fields _;
    bool _hasResult;
    bool _hasValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BranchInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_BranchInstruction__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BranchInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BranchInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/BranchInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BranchInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
