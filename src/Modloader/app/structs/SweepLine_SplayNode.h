#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SweepLine_SplayNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SweepLine_SplayNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode_DEFINED)
#include <Modloader/app/structs/SweepLine_SplayNode__Fields.h>
#if defined(IL2CPP_STRUCT_SweepLine_SplayNode__Fields_DEFINED)
#define IL2CPP_STRUCT_SweepLine_SplayNode_DEFINED
struct SweepLine_SplayNode__Class;
struct SweepLine_SplayNode {
    struct SweepLine_SplayNode__Class* klass;
    MonitorData* monitor;
    struct SweepLine_SplayNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode_FWDDECL)
#define IL2CPP_STRUCT_SweepLine_SplayNode_FWDDECL
#include <Modloader/app/structs/SweepLine_SplayNode__Class.h>
#endif
#undef IL2CPP_STRUCT_SweepLine_SplayNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine_SplayNode_DEFINED) && !defined(IL2CPP_STRUCT_SweepLine_SplayNode_FWDDECL)
#include <Modloader/app/structs/SweepLine_SplayNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SweepLine_SplayNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
