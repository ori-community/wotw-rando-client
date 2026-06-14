#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JSONNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JSONNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONNode_DEFINED)
#include <Modloader/app/structs/JSONNode__Fields.h>
#if defined(IL2CPP_STRUCT_JSONNode__Fields_DEFINED)
#define IL2CPP_STRUCT_JSONNode_DEFINED
struct JSONNode__Class;
struct JSONNode {
    struct JSONNode__Class* klass;
    MonitorData* monitor;
    struct JSONNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JSONNode_FWDDECL)
#define IL2CPP_STRUCT_JSONNode_FWDDECL
#include <Modloader/app/structs/JSONNode__Class.h>
#endif
#undef IL2CPP_STRUCT_JSONNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_JSONNode_DEFINED) && !defined(IL2CPP_STRUCT_JSONNode_FWDDECL)
#include <Modloader/app/structs/JSONNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JSONNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
