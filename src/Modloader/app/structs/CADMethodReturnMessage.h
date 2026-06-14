#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADMethodReturnMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADMethodReturnMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMethodReturnMessage_DEFINED)
#include <Modloader/app/structs/CADMethodReturnMessage__Fields.h>
#if defined(IL2CPP_STRUCT_CADMethodReturnMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_CADMethodReturnMessage_DEFINED
struct CADMethodReturnMessage__Class;
struct CADMethodReturnMessage {
    struct CADMethodReturnMessage__Class* klass;
    MonitorData* monitor;
    struct CADMethodReturnMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CADMethodReturnMessage_FWDDECL)
#define IL2CPP_STRUCT_CADMethodReturnMessage_FWDDECL
#include <Modloader/app/structs/CADMethodReturnMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_CADMethodReturnMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMethodReturnMessage_DEFINED) && !defined(IL2CPP_STRUCT_CADMethodReturnMessage_FWDDECL)
#include <Modloader/app/structs/CADMethodReturnMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADMethodReturnMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
