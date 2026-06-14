#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKuReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKuReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKuReceiver_DEFINED)
#define IL2CPP_STRUCT_IKuReceiver_DEFINED
struct IKuReceiver__Class;
struct IKuReceiver {
    struct IKuReceiver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IKuReceiver_FWDDECL)
#define IL2CPP_STRUCT_IKuReceiver_FWDDECL
#include <Modloader/app/structs/IKuReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_IKuReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKuReceiver_DEFINED) && !defined(IL2CPP_STRUCT_IKuReceiver_FWDDECL)
#include <Modloader/app/structs/IKuReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKuReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
