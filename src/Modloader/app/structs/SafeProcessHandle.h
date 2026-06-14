#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeProcessHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeProcessHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeProcessHandle_DEFINED)
#include <Modloader/app/structs/SafeProcessHandle__Fields.h>
#if defined(IL2CPP_STRUCT_SafeProcessHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeProcessHandle_DEFINED
struct SafeProcessHandle__Class;
struct SafeProcessHandle {
    struct SafeProcessHandle__Class* klass;
    MonitorData* monitor;
    struct SafeProcessHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeProcessHandle_FWDDECL)
#define IL2CPP_STRUCT_SafeProcessHandle_FWDDECL
#include <Modloader/app/structs/SafeProcessHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeProcessHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeProcessHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafeProcessHandle_FWDDECL)
#include <Modloader/app/structs/SafeProcessHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeProcessHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
