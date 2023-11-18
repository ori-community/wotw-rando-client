#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ErrorMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ErrorMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorMessage_DEFINED)
#include <Modloader/app/structs/ErrorMessage__Fields.h>
#if defined(IL2CPP_STRUCT_ErrorMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_ErrorMessage_DEFINED
struct ErrorMessage__Class;
struct ErrorMessage {
    struct ErrorMessage__Class* klass;
    MonitorData* monitor;
    struct ErrorMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ErrorMessage_FWDDECL)
#define IL2CPP_STRUCT_ErrorMessage_FWDDECL
#include <Modloader/app/structs/ErrorMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_ErrorMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorMessage_DEFINED) && !defined(IL2CPP_STRUCT_ErrorMessage_FWDDECL)
#include <Modloader/app/structs/ErrorMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ErrorMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
