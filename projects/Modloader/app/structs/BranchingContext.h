#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BranchingContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BranchingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchingContext_DEFINED)
#define IL2CPP_STRUCT_BranchingContext_DEFINED
struct BranchingContext {
    int32_t Branch;
    bool _ShouldRecord_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_BranchingContext_FWDDECL)
#define IL2CPP_STRUCT_BranchingContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_BranchingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchingContext_DEFINED) && !defined(IL2CPP_STRUCT_BranchingContext_FWDDECL)
#include <Modloader/app/structs/BranchingContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BranchingContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
