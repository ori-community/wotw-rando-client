#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompositeNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompositeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeNode_DEFINED)
#include <Modloader/app/structs/CompositeNode__Fields.h>
#if defined(IL2CPP_STRUCT_CompositeNode__Fields_DEFINED)
#define IL2CPP_STRUCT_CompositeNode_DEFINED
struct CompositeNode__Class;
struct CompositeNode {
    struct CompositeNode__Class* klass;
    MonitorData* monitor;
    struct CompositeNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompositeNode_FWDDECL)
#define IL2CPP_STRUCT_CompositeNode_FWDDECL
#include <Modloader/app/structs/CompositeNode__Class.h>
#endif
#undef IL2CPP_STRUCT_CompositeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeNode_DEFINED) && !defined(IL2CPP_STRUCT_CompositeNode_FWDDECL)
#include <Modloader/app/structs/CompositeNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompositeNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
