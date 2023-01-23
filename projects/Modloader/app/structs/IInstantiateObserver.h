#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInstantiateObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInstantiateObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInstantiateObserver_DEFINED)
#define IL2CPP_STRUCT_IInstantiateObserver_DEFINED
struct IInstantiateObserver__Class;
struct IInstantiateObserver {
    struct IInstantiateObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInstantiateObserver_FWDDECL)
#define IL2CPP_STRUCT_IInstantiateObserver_FWDDECL
#include <Modloader/app/structs/IInstantiateObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_IInstantiateObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInstantiateObserver_DEFINED) && !defined(IL2CPP_STRUCT_IInstantiateObserver_FWDDECL)
#include <Modloader/app/structs/IInstantiateObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInstantiateObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
