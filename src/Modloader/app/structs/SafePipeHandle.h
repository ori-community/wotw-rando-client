#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafePipeHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafePipeHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafePipeHandle_DEFINED)
#include <Modloader/app/structs/SafePipeHandle__Fields.h>
#if defined(IL2CPP_STRUCT_SafePipeHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_SafePipeHandle_DEFINED
struct SafePipeHandle__Class;
struct SafePipeHandle {
    struct SafePipeHandle__Class* klass;
    MonitorData* monitor;
    struct SafePipeHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafePipeHandle_FWDDECL)
#define IL2CPP_STRUCT_SafePipeHandle_FWDDECL
#include <Modloader/app/structs/SafePipeHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_SafePipeHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafePipeHandle_DEFINED) && !defined(IL2CPP_STRUCT_SafePipeHandle_FWDDECL)
#include <Modloader/app/structs/SafePipeHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafePipeHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
