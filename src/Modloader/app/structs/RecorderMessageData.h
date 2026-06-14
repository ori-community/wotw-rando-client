#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderMessageData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderMessageData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessageData_DEFINED)
#include <Modloader/app/structs/RecorderMessageData__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderMessageData__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderMessageData_DEFINED
struct RecorderMessageData__Class;
struct RecorderMessageData {
    struct RecorderMessageData__Class* klass;
    MonitorData* monitor;
    struct RecorderMessageData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderMessageData_FWDDECL)
#define IL2CPP_STRUCT_RecorderMessageData_FWDDECL
#include <Modloader/app/structs/RecorderMessageData__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderMessageData_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessageData_DEFINED) && !defined(IL2CPP_STRUCT_RecorderMessageData_FWDDECL)
#include <Modloader/app/structs/RecorderMessageData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderMessageData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
