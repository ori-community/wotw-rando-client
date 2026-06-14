#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IHitStopReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IHitStopReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHitStopReceiver_DEFINED)
#define IL2CPP_STRUCT_IHitStopReceiver_DEFINED
struct IHitStopReceiver__Class;
struct IHitStopReceiver {
    struct IHitStopReceiver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IHitStopReceiver_FWDDECL)
#define IL2CPP_STRUCT_IHitStopReceiver_FWDDECL
#include <Modloader/app/structs/IHitStopReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_IHitStopReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IHitStopReceiver_DEFINED) && !defined(IL2CPP_STRUCT_IHitStopReceiver_FWDDECL)
#include <Modloader/app/structs/IHitStopReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IHitStopReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
