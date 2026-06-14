#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionCaptureAgent_DEFINED)
#include <Modloader/app/structs/ExceptionCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionCaptureAgent_DEFINED
struct ExceptionCaptureAgent__Class;
struct ExceptionCaptureAgent {
    struct ExceptionCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct ExceptionCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_ExceptionCaptureAgent_FWDDECL
#include <Modloader/app/structs/ExceptionCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionCaptureAgent_FWDDECL)
#include <Modloader/app/structs/ExceptionCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
