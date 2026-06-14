#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDialogDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDialogDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogDecorator_DEFINED)
#define IL2CPP_STRUCT_IDialogDecorator_DEFINED
struct IDialogDecorator__Class;
struct IDialogDecorator {
    struct IDialogDecorator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDialogDecorator_FWDDECL)
#define IL2CPP_STRUCT_IDialogDecorator_FWDDECL
#include <Modloader/app/structs/IDialogDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_IDialogDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogDecorator_DEFINED) && !defined(IL2CPP_STRUCT_IDialogDecorator_FWDDECL)
#include <Modloader/app/structs/IDialogDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDialogDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
