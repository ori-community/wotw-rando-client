#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Recorder__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Recorder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recorder__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Recorder__StaticFields_DEFINED
struct Recorder;
struct Recorder__StaticFields {
    struct Recorder* s_InvalidRecorder;
};
#endif
#if !defined(IL2CPP_STRUCT_Recorder__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Recorder__StaticFields_FWDDECL
#include <Modloader/app/structs/Recorder.h>
#endif
#undef IL2CPP_STRUCT_Recorder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Recorder__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Recorder__StaticFields_FWDDECL)
#include <Modloader/app/structs/Recorder__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Recorder__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
