#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsISerializationCallbacks_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsISerializationCallbacks_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsISerializationCallbacks_DEFINED)
#define IL2CPP_STRUCT_fsISerializationCallbacks_DEFINED
struct fsISerializationCallbacks__Class;
struct fsISerializationCallbacks {
    struct fsISerializationCallbacks__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsISerializationCallbacks_FWDDECL)
#define IL2CPP_STRUCT_fsISerializationCallbacks_FWDDECL
#include <Modloader/app/structs/fsISerializationCallbacks__Class.h>
#endif
#undef IL2CPP_STRUCT_fsISerializationCallbacks_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsISerializationCallbacks_DEFINED) && !defined(IL2CPP_STRUCT_fsISerializationCallbacks_FWDDECL)
#include <Modloader/app/structs/fsISerializationCallbacks.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsISerializationCallbacks.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
