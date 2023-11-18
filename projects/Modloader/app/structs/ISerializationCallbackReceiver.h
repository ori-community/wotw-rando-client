#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializationCallbackReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializationCallbackReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializationCallbackReceiver_DEFINED)
#define IL2CPP_STRUCT_ISerializationCallbackReceiver_DEFINED
struct ISerializationCallbackReceiver__Class;
struct ISerializationCallbackReceiver {
    struct ISerializationCallbackReceiver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializationCallbackReceiver_FWDDECL)
#define IL2CPP_STRUCT_ISerializationCallbackReceiver_FWDDECL
#include <Modloader/app/structs/ISerializationCallbackReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_ISerializationCallbackReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializationCallbackReceiver_DEFINED) && !defined(IL2CPP_STRUCT_ISerializationCallbackReceiver_FWDDECL)
#include <Modloader/app/structs/ISerializationCallbackReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializationCallbackReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
