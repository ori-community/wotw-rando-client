#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Range__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Range__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Range__Boxed_DEFINED)
#include <Modloader/app/structs/Range.h>
#if defined(IL2CPP_STRUCT_Range_DEFINED)
#define IL2CPP_STRUCT_Range__Boxed_DEFINED
struct Range__Class;
struct Range__Boxed {
    struct Range__Class* klass;
    MonitorData* monitor;
    struct Range fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Range__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Range__Boxed_FWDDECL
#include <Modloader/app/structs/Range__Class.h>
#endif
#undef IL2CPP_STRUCT_Range__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Range__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Range__Boxed_FWDDECL)
#include <Modloader/app/structs/Range__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Range__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
