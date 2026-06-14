#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LineDescent__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LineDescent__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineDescent__Boxed_DEFINED)
#include <Modloader/app/structs/LineDescent.h>
#if defined(IL2CPP_STRUCT_LineDescent_DEFINED)
#define IL2CPP_STRUCT_LineDescent__Boxed_DEFINED
struct LineDescent__Class;
struct LineDescent__Boxed {
    struct LineDescent__Class* klass;
    MonitorData* monitor;
    struct LineDescent fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LineDescent__Boxed_FWDDECL)
#define IL2CPP_STRUCT_LineDescent__Boxed_FWDDECL
#include <Modloader/app/structs/LineDescent__Class.h>
#endif
#undef IL2CPP_STRUCT_LineDescent__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LineDescent__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_LineDescent__Boxed_FWDDECL)
#include <Modloader/app/structs/LineDescent__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LineDescent__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
