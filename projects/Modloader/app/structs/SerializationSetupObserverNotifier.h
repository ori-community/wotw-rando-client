#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationSetupObserverNotifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationSetupObserverNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupObserverNotifier_DEFINED)
#define IL2CPP_STRUCT_SerializationSetupObserverNotifier_DEFINED
struct SerializationSetupObserverNotifier__Class;
struct SerializationSetupObserverNotifier {
    struct SerializationSetupObserverNotifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationSetupObserverNotifier_FWDDECL)
#define IL2CPP_STRUCT_SerializationSetupObserverNotifier_FWDDECL
#include <Modloader/app/structs/SerializationSetupObserverNotifier__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializationSetupObserverNotifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupObserverNotifier_DEFINED) && !defined(IL2CPP_STRUCT_SerializationSetupObserverNotifier_FWDDECL)
#include <Modloader/app/structs/SerializationSetupObserverNotifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationSetupObserverNotifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
