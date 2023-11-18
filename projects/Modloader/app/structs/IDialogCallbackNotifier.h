#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDialogCallbackNotifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDialogCallbackNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogCallbackNotifier_DEFINED)
#define IL2CPP_STRUCT_IDialogCallbackNotifier_DEFINED
struct IDialogCallbackNotifier__Class;
struct IDialogCallbackNotifier {
    struct IDialogCallbackNotifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDialogCallbackNotifier_FWDDECL)
#define IL2CPP_STRUCT_IDialogCallbackNotifier_FWDDECL
#include <Modloader/app/structs/IDialogCallbackNotifier__Class.h>
#endif
#undef IL2CPP_STRUCT_IDialogCallbackNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogCallbackNotifier_DEFINED) && !defined(IL2CPP_STRUCT_IDialogCallbackNotifier_FWDDECL)
#include <Modloader/app/structs/IDialogCallbackNotifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDialogCallbackNotifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
