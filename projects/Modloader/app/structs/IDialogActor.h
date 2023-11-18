#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDialogActor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDialogActor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogActor_DEFINED)
#define IL2CPP_STRUCT_IDialogActor_DEFINED
struct IDialogActor__Class;
struct IDialogActor {
    struct IDialogActor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDialogActor_FWDDECL)
#define IL2CPP_STRUCT_IDialogActor_FWDDECL
#include <Modloader/app/structs/IDialogActor__Class.h>
#endif
#undef IL2CPP_STRUCT_IDialogActor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDialogActor_DEFINED) && !defined(IL2CPP_STRUCT_IDialogActor_FWDDECL)
#include <Modloader/app/structs/IDialogActor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDialogActor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
