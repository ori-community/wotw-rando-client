#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_YogaNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_YogaNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_YogaNode_DEFINED)
#include <Modloader/app/structs/YogaNode__Fields.h>
#if defined(IL2CPP_STRUCT_YogaNode__Fields_DEFINED)
#define IL2CPP_STRUCT_YogaNode_DEFINED
struct YogaNode__Class;
struct YogaNode {
    struct YogaNode__Class* klass;
    MonitorData* monitor;
    struct YogaNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_YogaNode_FWDDECL)
#define IL2CPP_STRUCT_YogaNode_FWDDECL
#include <Modloader/app/structs/YogaNode__Class.h>
#endif
#undef IL2CPP_STRUCT_YogaNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_YogaNode_DEFINED) && !defined(IL2CPP_STRUCT_YogaNode_FWDDECL)
#include <Modloader/app/structs/YogaNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/YogaNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
