#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNode_DEFINED)
#include <Modloader/app/structs/XNode__Fields.h>
#if defined(IL2CPP_STRUCT_XNode__Fields_DEFINED)
#define IL2CPP_STRUCT_XNode_DEFINED
struct XNode__Class;
struct XNode {
    struct XNode__Class* klass;
    MonitorData* monitor;
    struct XNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XNode_FWDDECL)
#define IL2CPP_STRUCT_XNode_FWDDECL
#include <Modloader/app/structs/XNode__Class.h>
#endif
#undef IL2CPP_STRUCT_XNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNode_DEFINED) && !defined(IL2CPP_STRUCT_XNode_FWDDECL)
#include <Modloader/app/structs/XNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
