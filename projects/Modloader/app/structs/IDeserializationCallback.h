#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDeserializationCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDeserializationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDeserializationCallback_DEFINED)
#define IL2CPP_STRUCT_IDeserializationCallback_DEFINED
struct IDeserializationCallback__Class;
struct IDeserializationCallback {
    struct IDeserializationCallback__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDeserializationCallback_FWDDECL)
#define IL2CPP_STRUCT_IDeserializationCallback_FWDDECL
#include <Modloader/app/structs/IDeserializationCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_IDeserializationCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDeserializationCallback_DEFINED) && !defined(IL2CPP_STRUCT_IDeserializationCallback_FWDDECL)
#include <Modloader/app/structs/IDeserializationCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDeserializationCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
