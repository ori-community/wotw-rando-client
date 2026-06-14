#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QmarkNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QmarkNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_QmarkNode_DEFINED)
#include <Modloader/app/structs/QmarkNode__Fields.h>
#if defined(IL2CPP_STRUCT_QmarkNode__Fields_DEFINED)
#define IL2CPP_STRUCT_QmarkNode_DEFINED
struct QmarkNode__Class;
struct QmarkNode {
    struct QmarkNode__Class* klass;
    MonitorData* monitor;
    struct QmarkNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QmarkNode_FWDDECL)
#define IL2CPP_STRUCT_QmarkNode_FWDDECL
#include <Modloader/app/structs/QmarkNode__Class.h>
#endif
#undef IL2CPP_STRUCT_QmarkNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_QmarkNode_DEFINED) && !defined(IL2CPP_STRUCT_QmarkNode_FWDDECL)
#include <Modloader/app/structs/QmarkNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QmarkNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
