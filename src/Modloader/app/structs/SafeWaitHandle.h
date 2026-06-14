#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeWaitHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeWaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeWaitHandle_DEFINED)
#include <Modloader/app/structs/SafeWaitHandle__Fields.h>
#if defined(IL2CPP_STRUCT_SafeWaitHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeWaitHandle_DEFINED
struct SafeWaitHandle__Class;
struct SafeWaitHandle {
    struct SafeWaitHandle__Class* klass;
    MonitorData* monitor;
    struct SafeWaitHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeWaitHandle_FWDDECL)
#define IL2CPP_STRUCT_SafeWaitHandle_FWDDECL
#include <Modloader/app/structs/SafeWaitHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeWaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeWaitHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafeWaitHandle_FWDDECL)
#include <Modloader/app/structs/SafeWaitHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeWaitHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
