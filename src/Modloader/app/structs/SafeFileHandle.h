#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeFileHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeFileHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeFileHandle_DEFINED)
#include <Modloader/app/structs/SafeFileHandle__Fields.h>
#if defined(IL2CPP_STRUCT_SafeFileHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeFileHandle_DEFINED
struct SafeFileHandle__Class;
struct SafeFileHandle {
    struct SafeFileHandle__Class* klass;
    MonitorData* monitor;
    struct SafeFileHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeFileHandle_FWDDECL)
#define IL2CPP_STRUCT_SafeFileHandle_FWDDECL
#include <Modloader/app/structs/SafeFileHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeFileHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeFileHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafeFileHandle_FWDDECL)
#include <Modloader/app/structs/SafeFileHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeFileHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
