#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int32__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int32__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int32__Boxed_DEFINED)
#define IL2CPP_STRUCT_Int32__Boxed_DEFINED
struct Int32__Class;
struct Int32__Boxed {
    struct Int32__Class* klass;
    MonitorData* monitor;
    int32_t fields;
};
#endif
#if !defined(IL2CPP_STRUCT_Int32__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Int32__Boxed_FWDDECL
#include <Modloader/app/structs/Int32__Class.h>
#endif
#undef IL2CPP_STRUCT_Int32__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int32__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Int32__Boxed_FWDDECL)
#include <Modloader/app/structs/Int32__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int32__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
