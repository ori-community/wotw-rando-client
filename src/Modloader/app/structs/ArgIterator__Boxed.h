#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgIterator__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgIterator__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgIterator__Boxed_DEFINED)
#include <Modloader/app/structs/ArgIterator.h>
#if defined(IL2CPP_STRUCT_ArgIterator_DEFINED)
#define IL2CPP_STRUCT_ArgIterator__Boxed_DEFINED
struct ArgIterator__Class;
struct ArgIterator__Boxed {
    struct ArgIterator__Class* klass;
    MonitorData* monitor;
    struct ArgIterator fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArgIterator__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ArgIterator__Boxed_FWDDECL
#include <Modloader/app/structs/ArgIterator__Class.h>
#endif
#undef IL2CPP_STRUCT_ArgIterator__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgIterator__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ArgIterator__Boxed_FWDDECL)
#include <Modloader/app/structs/ArgIterator__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgIterator__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
