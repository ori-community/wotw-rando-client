#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_DEFINED)
#include <Modloader/app/structs/NotifyCollectionChangedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_NotifyCollectionChangedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_DEFINED
struct NotifyCollectionChangedEventHandler__Class;
struct NotifyCollectionChangedEventHandler {
    struct NotifyCollectionChangedEventHandler__Class* klass;
    MonitorData* monitor;
    struct NotifyCollectionChangedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_FWDDECL
#include <Modloader/app/structs/NotifyCollectionChangedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_NotifyCollectionChangedEventHandler_FWDDECL)
#include <Modloader/app/structs/NotifyCollectionChangedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotifyCollectionChangedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
