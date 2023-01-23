#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaptureData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaptureData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureData_DEFINED)
#include <Modloader/app/structs/CaptureData__Fields.h>
#if defined(IL2CPP_STRUCT_CaptureData__Fields_DEFINED)
#define IL2CPP_STRUCT_CaptureData_DEFINED
struct CaptureData__Class;
struct CaptureData {
    struct CaptureData__Class* klass;
    MonitorData* monitor;
    struct CaptureData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CaptureData_FWDDECL)
#define IL2CPP_STRUCT_CaptureData_FWDDECL
#include <Modloader/app/structs/CaptureData__Class.h>
#endif
#undef IL2CPP_STRUCT_CaptureData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureData_DEFINED) && !defined(IL2CPP_STRUCT_CaptureData_FWDDECL)
#include <Modloader/app/structs/CaptureData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaptureData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
