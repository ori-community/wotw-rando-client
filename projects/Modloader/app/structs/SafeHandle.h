#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeHandle_DEFINED)
#include <Modloader/app/structs/SafeHandle__Fields.h>
#if defined(IL2CPP_STRUCT_SafeHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeHandle_DEFINED
struct SafeHandle__Class;
struct SafeHandle {
    struct SafeHandle__Class* klass;
    MonitorData* monitor;
    struct SafeHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeHandle_FWDDECL)
#define IL2CPP_STRUCT_SafeHandle_FWDDECL
#include <Modloader/app/structs/SafeHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafeHandle_FWDDECL)
#include <Modloader/app/structs/SafeHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
