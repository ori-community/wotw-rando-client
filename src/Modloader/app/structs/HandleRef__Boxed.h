#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HandleRef__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HandleRef__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandleRef__Boxed_DEFINED)
#include <Modloader/app/structs/HandleRef.h>
#if defined(IL2CPP_STRUCT_HandleRef_DEFINED)
#define IL2CPP_STRUCT_HandleRef__Boxed_DEFINED
struct HandleRef__Class;
struct HandleRef__Boxed {
    struct HandleRef__Class* klass;
    MonitorData* monitor;
    struct HandleRef fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HandleRef__Boxed_FWDDECL)
#define IL2CPP_STRUCT_HandleRef__Boxed_FWDDECL
#include <Modloader/app/structs/HandleRef__Class.h>
#endif
#undef IL2CPP_STRUCT_HandleRef__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HandleRef__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_HandleRef__Boxed_FWDDECL)
#include <Modloader/app/structs/HandleRef__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HandleRef__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
