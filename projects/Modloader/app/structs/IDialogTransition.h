#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDialogTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDialogTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogTransition_DEFINED)
#define IL2CPP_STRUCT_IDialogTransition_DEFINED
struct IDialogTransition__Class;
struct IDialogTransition {
    struct IDialogTransition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDialogTransition_FWDDECL)
#define IL2CPP_STRUCT_IDialogTransition_FWDDECL
#include <Modloader/app/structs/IDialogTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_IDialogTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogTransition_DEFINED) && !defined(IL2CPP_STRUCT_IDialogTransition_FWDDECL)
#include <Modloader/app/structs/IDialogTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDialogTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
