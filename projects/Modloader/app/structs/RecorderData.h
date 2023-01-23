#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderData_DEFINED)
#include <Modloader/app/structs/RecorderData__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderData__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderData_DEFINED
struct RecorderData__Class;
struct RecorderData {
    struct RecorderData__Class* klass;
    MonitorData* monitor;
    struct RecorderData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderData_FWDDECL)
#define IL2CPP_STRUCT_RecorderData_FWDDECL
#include <Modloader/app/structs/RecorderData__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderData_DEFINED) && !defined(IL2CPP_STRUCT_RecorderData_FWDDECL)
#include <Modloader/app/structs/RecorderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
