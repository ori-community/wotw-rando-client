#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ButtonDialogTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ButtonDialogTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonDialogTransition_DEFINED)
#include <Modloader/app/structs/ButtonDialogTransition__Fields.h>
#if defined(IL2CPP_STRUCT_ButtonDialogTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_ButtonDialogTransition_DEFINED
struct ButtonDialogTransition__Class;
struct ButtonDialogTransition {
    struct ButtonDialogTransition__Class* klass;
    MonitorData* monitor;
    struct ButtonDialogTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ButtonDialogTransition_FWDDECL)
#define IL2CPP_STRUCT_ButtonDialogTransition_FWDDECL
#include <Modloader/app/structs/ButtonDialogTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_ButtonDialogTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonDialogTransition_DEFINED) && !defined(IL2CPP_STRUCT_ButtonDialogTransition_FWDDECL)
#include <Modloader/app/structs/ButtonDialogTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ButtonDialogTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
