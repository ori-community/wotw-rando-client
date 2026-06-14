#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeArgumentHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeArgumentHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_DEFINED
struct RuntimeArgumentHandle__Class;
struct RuntimeArgumentHandle__Boxed {
    struct RuntimeArgumentHandle__Class* klass;
    MonitorData* monitor;
    struct RuntimeArgumentHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeArgumentHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeArgumentHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeArgumentHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeArgumentHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
