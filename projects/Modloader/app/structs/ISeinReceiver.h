#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISeinReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISeinReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISeinReceiver_DEFINED)
#define IL2CPP_STRUCT_ISeinReceiver_DEFINED
struct ISeinReceiver__Class;
struct ISeinReceiver {
    struct ISeinReceiver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISeinReceiver_FWDDECL)
#define IL2CPP_STRUCT_ISeinReceiver_FWDDECL
#include <Modloader/app/structs/ISeinReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_ISeinReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISeinReceiver_DEFINED) && !defined(IL2CPP_STRUCT_ISeinReceiver_FWDDECL)
#include <Modloader/app/structs/ISeinReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISeinReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
