#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HTTPRequestHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HTTPRequestHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTTPRequestHandle__Boxed_DEFINED)
#include <Modloader/app/structs/HTTPRequestHandle.h>
#if defined(IL2CPP_STRUCT_HTTPRequestHandle_DEFINED)
#define IL2CPP_STRUCT_HTTPRequestHandle__Boxed_DEFINED
struct HTTPRequestHandle__Class;
struct HTTPRequestHandle__Boxed {
    struct HTTPRequestHandle__Class* klass;
    MonitorData* monitor;
    struct HTTPRequestHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HTTPRequestHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_HTTPRequestHandle__Boxed_FWDDECL
#include <Modloader/app/structs/HTTPRequestHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_HTTPRequestHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HTTPRequestHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_HTTPRequestHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/HTTPRequestHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HTTPRequestHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
