#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INotifyPropertyChanged_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INotifyPropertyChanged_INITIALIZING
#if !defined(IL2CPP_STRUCT_INotifyPropertyChanged_DEFINED)
#define IL2CPP_STRUCT_INotifyPropertyChanged_DEFINED
struct INotifyPropertyChanged__Class;
struct INotifyPropertyChanged {
    struct INotifyPropertyChanged__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INotifyPropertyChanged_FWDDECL)
#define IL2CPP_STRUCT_INotifyPropertyChanged_FWDDECL
#include <Modloader/app/structs/INotifyPropertyChanged__Class.h>
#endif
#undef IL2CPP_STRUCT_INotifyPropertyChanged_INITIALIZING
#if !defined(IL2CPP_STRUCT_INotifyPropertyChanged_DEFINED) && !defined(IL2CPP_STRUCT_INotifyPropertyChanged_FWDDECL)
#include <Modloader/app/structs/INotifyPropertyChanged.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INotifyPropertyChanged.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
