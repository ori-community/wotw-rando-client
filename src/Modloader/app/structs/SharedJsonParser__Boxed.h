#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedJsonParser__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedJsonParser__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedJsonParser__Boxed_DEFINED)
#include <Modloader/app/structs/SharedJsonParser.h>
#if defined(IL2CPP_STRUCT_SharedJsonParser_DEFINED)
#define IL2CPP_STRUCT_SharedJsonParser__Boxed_DEFINED
struct SharedJsonParser__Class;
struct SharedJsonParser__Boxed {
    struct SharedJsonParser__Class* klass;
    MonitorData* monitor;
    struct SharedJsonParser fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SharedJsonParser__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SharedJsonParser__Boxed_FWDDECL
#include <Modloader/app/structs/SharedJsonParser__Class.h>
#endif
#undef IL2CPP_STRUCT_SharedJsonParser__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedJsonParser__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SharedJsonParser__Boxed_FWDDECL)
#include <Modloader/app/structs/SharedJsonParser__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedJsonParser__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
