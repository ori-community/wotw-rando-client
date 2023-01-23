#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParallelNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParallelNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParallelNode_DEFINED)
#include <Modloader/app/structs/ParallelNode__Fields.h>
#if defined(IL2CPP_STRUCT_ParallelNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ParallelNode_DEFINED
struct ParallelNode__Class;
struct ParallelNode {
    struct ParallelNode__Class* klass;
    MonitorData* monitor;
    struct ParallelNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParallelNode_FWDDECL)
#define IL2CPP_STRUCT_ParallelNode_FWDDECL
#include <Modloader/app/structs/ParallelNode__Class.h>
#endif
#undef IL2CPP_STRUCT_ParallelNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParallelNode_DEFINED) && !defined(IL2CPP_STRUCT_ParallelNode_FWDDECL)
#include <Modloader/app/structs/ParallelNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParallelNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
