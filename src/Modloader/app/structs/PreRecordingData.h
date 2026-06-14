#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreRecordingData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreRecordingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingData_DEFINED)
#include <Modloader/app/structs/PreRecordingData__Fields.h>
#if defined(IL2CPP_STRUCT_PreRecordingData__Fields_DEFINED)
#define IL2CPP_STRUCT_PreRecordingData_DEFINED
struct PreRecordingData__Class;
struct PreRecordingData {
    struct PreRecordingData__Class* klass;
    MonitorData* monitor;
    struct PreRecordingData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreRecordingData_FWDDECL)
#define IL2CPP_STRUCT_PreRecordingData_FWDDECL
#include <Modloader/app/structs/PreRecordingData__Class.h>
#endif
#undef IL2CPP_STRUCT_PreRecordingData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingData_DEFINED) && !defined(IL2CPP_STRUCT_PreRecordingData_FWDDECL)
#include <Modloader/app/structs/PreRecordingData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreRecordingData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
