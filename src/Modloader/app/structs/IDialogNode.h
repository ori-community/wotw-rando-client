#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDialogNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDialogNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogNode_DEFINED)
#define IL2CPP_STRUCT_IDialogNode_DEFINED
struct IDialogNode__Class;
struct IDialogNode {
    struct IDialogNode__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDialogNode_FWDDECL)
#define IL2CPP_STRUCT_IDialogNode_FWDDECL
#include <Modloader/app/structs/IDialogNode__Class.h>
#endif
#undef IL2CPP_STRUCT_IDialogNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogNode_DEFINED) && !defined(IL2CPP_STRUCT_IDialogNode_FWDDECL)
#include <Modloader/app/structs/IDialogNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDialogNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
