#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsResult__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsResult__Boxed_DEFINED)
#include <Modloader/app/structs/fsResult.h>
#if defined(IL2CPP_STRUCT_fsResult_DEFINED)
#define IL2CPP_STRUCT_fsResult__Boxed_DEFINED
struct fsResult__Class;
struct fsResult__Boxed {
    struct fsResult__Class* klass;
    MonitorData* monitor;
    struct fsResult fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsResult__Boxed_FWDDECL)
#define IL2CPP_STRUCT_fsResult__Boxed_FWDDECL
#include <Modloader/app/structs/fsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_fsResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsResult__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_fsResult__Boxed_FWDDECL)
#include <Modloader/app/structs/fsResult__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsResult__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
