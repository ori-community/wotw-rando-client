#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReturnMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReturnMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReturnMessage_DEFINED)
#include <Modloader/app/structs/ReturnMessage__Fields.h>
#if defined(IL2CPP_STRUCT_ReturnMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_ReturnMessage_DEFINED
struct ReturnMessage__Class;
struct ReturnMessage {
    struct ReturnMessage__Class* klass;
    MonitorData* monitor;
    struct ReturnMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReturnMessage_FWDDECL)
#define IL2CPP_STRUCT_ReturnMessage_FWDDECL
#include <Modloader/app/structs/ReturnMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_ReturnMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReturnMessage_DEFINED) && !defined(IL2CPP_STRUCT_ReturnMessage_FWDDECL)
#include <Modloader/app/structs/ReturnMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReturnMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
