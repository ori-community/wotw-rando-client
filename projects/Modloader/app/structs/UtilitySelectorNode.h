#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UtilitySelectorNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UtilitySelectorNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode_DEFINED)
#include <Modloader/app/structs/UtilitySelectorNode__Fields.h>
#if defined(IL2CPP_STRUCT_UtilitySelectorNode__Fields_DEFINED)
#define IL2CPP_STRUCT_UtilitySelectorNode_DEFINED
struct UtilitySelectorNode__Class;
struct UtilitySelectorNode {
    struct UtilitySelectorNode__Class* klass;
    MonitorData* monitor;
    struct UtilitySelectorNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode_FWDDECL)
#define IL2CPP_STRUCT_UtilitySelectorNode_FWDDECL
#include <Modloader/app/structs/UtilitySelectorNode__Class.h>
#endif
#undef IL2CPP_STRUCT_UtilitySelectorNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_UtilitySelectorNode_DEFINED) && !defined(IL2CPP_STRUCT_UtilitySelectorNode_FWDDECL)
#include <Modloader/app/structs/UtilitySelectorNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UtilitySelectorNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
