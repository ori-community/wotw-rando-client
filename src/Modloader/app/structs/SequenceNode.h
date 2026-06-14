#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequenceNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequenceNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequenceNode_DEFINED)
#include <Modloader/app/structs/SequenceNode__Fields.h>
#if defined(IL2CPP_STRUCT_SequenceNode__Fields_DEFINED)
#define IL2CPP_STRUCT_SequenceNode_DEFINED
struct SequenceNode__Class;
struct SequenceNode {
    struct SequenceNode__Class* klass;
    MonitorData* monitor;
    struct SequenceNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequenceNode_FWDDECL)
#define IL2CPP_STRUCT_SequenceNode_FWDDECL
#include <Modloader/app/structs/SequenceNode__Class.h>
#endif
#undef IL2CPP_STRUCT_SequenceNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequenceNode_DEFINED) && !defined(IL2CPP_STRUCT_SequenceNode_FWDDECL)
#include <Modloader/app/structs/SequenceNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequenceNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
