#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GCHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GCHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCHandle__Boxed_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_GCHandle__Boxed_DEFINED
struct GCHandle__Class;
struct GCHandle__Boxed {
    struct GCHandle__Class* klass;
    MonitorData* monitor;
    struct GCHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GCHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_GCHandle__Boxed_FWDDECL
#include <Modloader/app/structs/GCHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_GCHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_GCHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/GCHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GCHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
