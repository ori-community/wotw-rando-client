#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LikeNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LikeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_LikeNode_DEFINED)
#include <Modloader/app/structs/LikeNode__Fields.h>
#if defined(IL2CPP_STRUCT_LikeNode__Fields_DEFINED)
#define IL2CPP_STRUCT_LikeNode_DEFINED
struct LikeNode__Class;
struct LikeNode {
    struct LikeNode__Class* klass;
    MonitorData* monitor;
    struct LikeNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LikeNode_FWDDECL)
#define IL2CPP_STRUCT_LikeNode_FWDDECL
#include <Modloader/app/structs/LikeNode__Class.h>
#endif
#undef IL2CPP_STRUCT_LikeNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_LikeNode_DEFINED) && !defined(IL2CPP_STRUCT_LikeNode_FWDDECL)
#include <Modloader/app/structs/LikeNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LikeNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
