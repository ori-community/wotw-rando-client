#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamingContext__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamingContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingContext__Boxed_DEFINED)
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#define IL2CPP_STRUCT_StreamingContext__Boxed_DEFINED
struct StreamingContext__Class;
struct StreamingContext__Boxed {
    struct StreamingContext__Class* klass;
    MonitorData* monitor;
    struct StreamingContext fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamingContext__Boxed_FWDDECL)
#define IL2CPP_STRUCT_StreamingContext__Boxed_FWDDECL
#include <Modloader/app/structs/StreamingContext__Class.h>
#endif
#undef IL2CPP_STRUCT_StreamingContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingContext__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_StreamingContext__Boxed_FWDDECL)
#include <Modloader/app/structs/StreamingContext__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamingContext__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
