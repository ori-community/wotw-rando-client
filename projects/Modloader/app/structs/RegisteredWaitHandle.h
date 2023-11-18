#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisteredWaitHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisteredWaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisteredWaitHandle_DEFINED)
#include <Modloader/app/structs/RegisteredWaitHandle__Fields.h>
#if defined(IL2CPP_STRUCT_RegisteredWaitHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisteredWaitHandle_DEFINED
struct RegisteredWaitHandle__Class;
struct RegisteredWaitHandle {
    struct RegisteredWaitHandle__Class* klass;
    MonitorData* monitor;
    struct RegisteredWaitHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisteredWaitHandle_FWDDECL)
#define IL2CPP_STRUCT_RegisteredWaitHandle_FWDDECL
#include <Modloader/app/structs/RegisteredWaitHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_RegisteredWaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisteredWaitHandle_DEFINED) && !defined(IL2CPP_STRUCT_RegisteredWaitHandle_FWDDECL)
#include <Modloader/app/structs/RegisteredWaitHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisteredWaitHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
