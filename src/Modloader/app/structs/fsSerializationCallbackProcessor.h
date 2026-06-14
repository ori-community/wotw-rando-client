#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsSerializationCallbackProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsSerializationCallbackProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsSerializationCallbackProcessor_DEFINED)
#define IL2CPP_STRUCT_fsSerializationCallbackProcessor_DEFINED
struct fsSerializationCallbackProcessor__Class;
struct fsSerializationCallbackProcessor {
    struct fsSerializationCallbackProcessor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsSerializationCallbackProcessor_FWDDECL)
#define IL2CPP_STRUCT_fsSerializationCallbackProcessor_FWDDECL
#include <Modloader/app/structs/fsSerializationCallbackProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_fsSerializationCallbackProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsSerializationCallbackProcessor_DEFINED) && !defined(IL2CPP_STRUCT_fsSerializationCallbackProcessor_FWDDECL)
#include <Modloader/app/structs/fsSerializationCallbackProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsSerializationCallbackProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
