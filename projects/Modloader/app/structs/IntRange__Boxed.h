#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntRange__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntRange__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntRange__Boxed_DEFINED)
#include <Modloader/app/structs/IntRange.h>
#if defined(IL2CPP_STRUCT_IntRange_DEFINED)
#define IL2CPP_STRUCT_IntRange__Boxed_DEFINED
struct IntRange__Class;
struct IntRange__Boxed {
    struct IntRange__Class* klass;
    MonitorData* monitor;
    struct IntRange fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntRange__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IntRange__Boxed_FWDDECL
#include <Modloader/app/structs/IntRange__Class.h>
#endif
#undef IL2CPP_STRUCT_IntRange__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntRange__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IntRange__Boxed_FWDDECL)
#include <Modloader/app/structs/IntRange__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntRange__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
