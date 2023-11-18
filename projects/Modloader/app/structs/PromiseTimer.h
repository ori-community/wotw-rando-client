#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PromiseTimer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PromiseTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PromiseTimer_DEFINED)
#include <Modloader/app/structs/PromiseTimer__Fields.h>
#if defined(IL2CPP_STRUCT_PromiseTimer__Fields_DEFINED)
#define IL2CPP_STRUCT_PromiseTimer_DEFINED
struct PromiseTimer__Class;
struct PromiseTimer {
    struct PromiseTimer__Class* klass;
    MonitorData* monitor;
    struct PromiseTimer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PromiseTimer_FWDDECL)
#define IL2CPP_STRUCT_PromiseTimer_FWDDECL
#include <Modloader/app/structs/PromiseTimer__Class.h>
#endif
#undef IL2CPP_STRUCT_PromiseTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_PromiseTimer_DEFINED) && !defined(IL2CPP_STRUCT_PromiseTimer_FWDDECL)
#include <Modloader/app/structs/PromiseTimer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PromiseTimer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
