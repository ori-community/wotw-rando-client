#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADMethodCallMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADMethodCallMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMethodCallMessage_DEFINED)
#include <Modloader/app/structs/CADMethodCallMessage__Fields.h>
#if defined(IL2CPP_STRUCT_CADMethodCallMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_CADMethodCallMessage_DEFINED
struct CADMethodCallMessage__Class;
struct CADMethodCallMessage {
    struct CADMethodCallMessage__Class* klass;
    MonitorData* monitor;
    struct CADMethodCallMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CADMethodCallMessage_FWDDECL)
#define IL2CPP_STRUCT_CADMethodCallMessage_FWDDECL
#include <Modloader/app/structs/CADMethodCallMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_CADMethodCallMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMethodCallMessage_DEFINED) && !defined(IL2CPP_STRUCT_CADMethodCallMessage_FWDDECL)
#include <Modloader/app/structs/CADMethodCallMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADMethodCallMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
