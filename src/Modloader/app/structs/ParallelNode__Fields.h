#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParallelNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParallelNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParallelNode__Fields_DEFINED)
#include <Modloader/app/structs/CompositeNode__Fields.h>
#include <Modloader/app/structs/ParallelNode_ParallelPolicy__Enum.h>
#if defined(IL2CPP_STRUCT_CompositeNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_ParallelNode_ParallelPolicy__Enum_DEFINED)
#define IL2CPP_STRUCT_ParallelNode__Fields_DEFINED
struct List_1_System_Int32_;
struct ParallelNode__Fields {
    struct CompositeNode__Fields _;
    ParallelNode_ParallelPolicy__Enum Policy;

    struct List_1_System_Int32_* m_finishedNodeIds;
    int32_t m_blockingNodeIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParallelNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParallelNode__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_ParallelNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParallelNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParallelNode__Fields_FWDDECL)
#include <Modloader/app/structs/ParallelNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParallelNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
