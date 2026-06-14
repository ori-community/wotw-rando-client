#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateHandle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateHandle_DEFINED)
#include <Modloader/app/structs/UpdateHandle__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateHandle_DEFINED
struct UpdateHandle__Class;
struct UpdateHandle {
    struct UpdateHandle__Class* klass;
    MonitorData* monitor;
    struct UpdateHandle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateHandle_FWDDECL)
#define IL2CPP_STRUCT_UpdateHandle_FWDDECL
#include <Modloader/app/structs/UpdateHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateHandle_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateHandle_DEFINED) && !defined(IL2CPP_STRUCT_UpdateHandle_FWDDECL)
#include <Modloader/app/structs/UpdateHandle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateHandle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
