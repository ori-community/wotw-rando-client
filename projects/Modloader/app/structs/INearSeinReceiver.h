#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INearSeinReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INearSeinReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_INearSeinReceiver_DEFINED)
#define IL2CPP_STRUCT_INearSeinReceiver_DEFINED
struct INearSeinReceiver__Class;
struct INearSeinReceiver {
    struct INearSeinReceiver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INearSeinReceiver_FWDDECL)
#define IL2CPP_STRUCT_INearSeinReceiver_FWDDECL
#include <Modloader/app/structs/INearSeinReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_INearSeinReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_INearSeinReceiver_DEFINED) && !defined(IL2CPP_STRUCT_INearSeinReceiver_FWDDECL)
#include <Modloader/app/structs/INearSeinReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INearSeinReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
