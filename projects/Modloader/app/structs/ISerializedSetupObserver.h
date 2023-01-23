#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializedSetupObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializedSetupObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializedSetupObserver_DEFINED)
#define IL2CPP_STRUCT_ISerializedSetupObserver_DEFINED
struct ISerializedSetupObserver__Class;
struct ISerializedSetupObserver {
    struct ISerializedSetupObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializedSetupObserver_FWDDECL)
#define IL2CPP_STRUCT_ISerializedSetupObserver_FWDDECL
#include <Modloader/app/structs/ISerializedSetupObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_ISerializedSetupObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializedSetupObserver_DEFINED) && !defined(IL2CPP_STRUCT_ISerializedSetupObserver_FWDDECL)
#include <Modloader/app/structs/ISerializedSetupObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializedSetupObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
