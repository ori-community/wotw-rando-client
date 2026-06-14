#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxRecorder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxRecorder_DEFINED)
#include <Modloader/app/structs/XboxRecorder__Fields.h>
#if defined(IL2CPP_STRUCT_XboxRecorder__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxRecorder_DEFINED
struct XboxRecorder__Class;
struct XboxRecorder {
    struct XboxRecorder__Class* klass;
    MonitorData* monitor;
    struct XboxRecorder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxRecorder_FWDDECL)
#define IL2CPP_STRUCT_XboxRecorder_FWDDECL
#include <Modloader/app/structs/XboxRecorder__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxRecorder_DEFINED) && !defined(IL2CPP_STRUCT_XboxRecorder_FWDDECL)
#include <Modloader/app/structs/XboxRecorder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxRecorder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
