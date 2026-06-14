#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGlobalRecordingTableReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGlobalRecordingTableReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGlobalRecordingTableReceiver_DEFINED)
#define IL2CPP_STRUCT_IGlobalRecordingTableReceiver_DEFINED
struct IGlobalRecordingTableReceiver__Class;
struct IGlobalRecordingTableReceiver {
    struct IGlobalRecordingTableReceiver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGlobalRecordingTableReceiver_FWDDECL)
#define IL2CPP_STRUCT_IGlobalRecordingTableReceiver_FWDDECL
#include <Modloader/app/structs/IGlobalRecordingTableReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_IGlobalRecordingTableReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGlobalRecordingTableReceiver_DEFINED) && !defined(IL2CPP_STRUCT_IGlobalRecordingTableReceiver_FWDDECL)
#include <Modloader/app/structs/IGlobalRecordingTableReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGlobalRecordingTableReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
