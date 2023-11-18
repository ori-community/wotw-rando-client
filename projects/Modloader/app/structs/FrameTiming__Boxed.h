#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameTiming__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameTiming__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameTiming__Boxed_DEFINED)
#include <Modloader/app/structs/FrameTiming.h>
#if defined(IL2CPP_STRUCT_FrameTiming_DEFINED)
#define IL2CPP_STRUCT_FrameTiming__Boxed_DEFINED
struct FrameTiming__Class;
struct FrameTiming__Boxed {
    struct FrameTiming__Class* klass;
    MonitorData* monitor;
    struct FrameTiming fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameTiming__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FrameTiming__Boxed_FWDDECL
#include <Modloader/app/structs/FrameTiming__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameTiming__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameTiming__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FrameTiming__Boxed_FWDDECL)
#include <Modloader/app/structs/FrameTiming__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameTiming__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
