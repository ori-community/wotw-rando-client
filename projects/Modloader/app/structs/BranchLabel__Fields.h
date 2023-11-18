#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BranchLabel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BranchLabel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchLabel__Fields_DEFINED)
#define IL2CPP_STRUCT_BranchLabel__Fields_DEFINED
struct List_1_System_Int32_;
struct __declspec(align(8)) BranchLabel__Fields {
    int32_t _targetIndex;
    int32_t _stackDepth;
    int32_t _continuationStackDepth;
    struct List_1_System_Int32_* _forwardBranchFixups;
    int32_t _LabelIndex_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_BranchLabel__Fields_FWDDECL)
#define IL2CPP_STRUCT_BranchLabel__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_BranchLabel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BranchLabel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BranchLabel__Fields_FWDDECL)
#include <Modloader/app/structs/BranchLabel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BranchLabel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
