#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int16__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int16__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16__Boxed_DEFINED)
#define IL2CPP_STRUCT_Int16__Boxed_DEFINED
struct Int16__Class;
struct Int16__Boxed {
    struct Int16__Class* klass;
    MonitorData* monitor;
    int16_t fields;
};
#endif
#if !defined(IL2CPP_STRUCT_Int16__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Int16__Boxed_FWDDECL
#include <Modloader/app/structs/Int16__Class.h>
#endif
#undef IL2CPP_STRUCT_Int16__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Int16__Boxed_FWDDECL)
#include <Modloader/app/structs/Int16__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int16__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
