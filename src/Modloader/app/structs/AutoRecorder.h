#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoRecorder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoRecorder_DEFINED)
#include <Modloader/app/structs/AutoRecorder__Fields.h>
#if defined(IL2CPP_STRUCT_AutoRecorder__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoRecorder_DEFINED
struct AutoRecorder__Class;
struct AutoRecorder {
    struct AutoRecorder__Class* klass;
    MonitorData* monitor;
    struct AutoRecorder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoRecorder_FWDDECL)
#define IL2CPP_STRUCT_AutoRecorder_FWDDECL
#include <Modloader/app/structs/AutoRecorder__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoRecorder_DEFINED) && !defined(IL2CPP_STRUCT_AutoRecorder_FWDDECL)
#include <Modloader/app/structs/AutoRecorder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoRecorder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
