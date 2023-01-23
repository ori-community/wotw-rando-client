#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpinWait__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpinWait__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpinWait__Boxed_DEFINED)
#include <Modloader/app/structs/SpinWait.h>
#if defined(IL2CPP_STRUCT_SpinWait_DEFINED)
#define IL2CPP_STRUCT_SpinWait__Boxed_DEFINED
struct SpinWait__Class;
struct SpinWait__Boxed {
    struct SpinWait__Class* klass;
    MonitorData* monitor;
    struct SpinWait fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpinWait__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SpinWait__Boxed_FWDDECL
#include <Modloader/app/structs/SpinWait__Class.h>
#endif
#undef IL2CPP_STRUCT_SpinWait__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpinWait__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SpinWait__Boxed_FWDDECL)
#include <Modloader/app/structs/SpinWait__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpinWait__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
