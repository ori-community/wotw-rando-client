#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogNode_DEFINED)
#include <Modloader/app/structs/DialogNode__Fields.h>
#if defined(IL2CPP_STRUCT_DialogNode__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogNode_DEFINED
struct DialogNode__Class;
struct DialogNode {
    struct DialogNode__Class* klass;
    MonitorData* monitor;
    struct DialogNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogNode_FWDDECL)
#define IL2CPP_STRUCT_DialogNode_FWDDECL
#include <Modloader/app/structs/DialogNode__Class.h>
#endif
#undef IL2CPP_STRUCT_DialogNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogNode_DEFINED) && !defined(IL2CPP_STRUCT_DialogNode_FWDDECL)
#include <Modloader/app/structs/DialogNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
