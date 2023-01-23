#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeSocketHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeSocketHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSocketHandle_DEFINED)
#include <Modloader/app/structs/SafeSocketHandle__Fields.h>
#if defined(IL2CPP_STRUCT_SafeSocketHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeSocketHandle_DEFINED
struct SafeSocketHandle__Class;
struct SafeSocketHandle {
    struct SafeSocketHandle__Class* klass;
    MonitorData* monitor;
    struct SafeSocketHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeSocketHandle_FWDDECL)
#define IL2CPP_STRUCT_SafeSocketHandle_FWDDECL
#include <Modloader/app/structs/SafeSocketHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeSocketHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSocketHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafeSocketHandle_FWDDECL)
#include <Modloader/app/structs/SafeSocketHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeSocketHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
