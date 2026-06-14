#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INotifyCompletion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INotifyCompletion_INITIALIZING
#if !defined(IL2CPP_STRUCT_INotifyCompletion_DEFINED)
#define IL2CPP_STRUCT_INotifyCompletion_DEFINED
struct INotifyCompletion__Class;
struct INotifyCompletion {
    struct INotifyCompletion__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INotifyCompletion_FWDDECL)
#define IL2CPP_STRUCT_INotifyCompletion_FWDDECL
#include <Modloader/app/structs/INotifyCompletion__Class.h>
#endif
#undef IL2CPP_STRUCT_INotifyCompletion_INITIALIZING
#if !defined(IL2CPP_STRUCT_INotifyCompletion_DEFINED) && !defined(IL2CPP_STRUCT_INotifyCompletion_FWDDECL)
#include <Modloader/app/structs/INotifyCompletion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INotifyCompletion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
