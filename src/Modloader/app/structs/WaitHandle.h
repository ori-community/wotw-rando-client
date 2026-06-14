#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitHandle_DEFINED)
#include <Modloader/app/structs/WaitHandle__Fields.h>
#if defined(IL2CPP_STRUCT_WaitHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitHandle_DEFINED
struct WaitHandle__Class;
struct WaitHandle {
    struct WaitHandle__Class* klass;
    MonitorData* monitor;
    struct WaitHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitHandle_FWDDECL)
#define IL2CPP_STRUCT_WaitHandle_FWDDECL
#include <Modloader/app/structs/WaitHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitHandle_DEFINED) && !defined(IL2CPP_STRUCT_WaitHandle_FWDDECL)
#include <Modloader/app/structs/WaitHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
