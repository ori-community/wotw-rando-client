#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Recorder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Recorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recorder_DEFINED)
#include <Modloader/app/structs/Recorder__Fields.h>
#if defined(IL2CPP_STRUCT_Recorder__Fields_DEFINED)
#define IL2CPP_STRUCT_Recorder_DEFINED
struct Recorder__Class;
struct Recorder {
    struct Recorder__Class* klass;
    MonitorData* monitor;
    struct Recorder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Recorder_FWDDECL)
#define IL2CPP_STRUCT_Recorder_FWDDECL
#include <Modloader/app/structs/Recorder__Class.h>
#endif
#undef IL2CPP_STRUCT_Recorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recorder_DEFINED) && !defined(IL2CPP_STRUCT_Recorder_FWDDECL)
#include <Modloader/app/structs/Recorder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Recorder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
