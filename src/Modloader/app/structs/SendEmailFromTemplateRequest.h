#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendEmailFromTemplateRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendEmailFromTemplateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendEmailFromTemplateRequest_DEFINED)
#include <Modloader/app/structs/SendEmailFromTemplateRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SendEmailFromTemplateRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SendEmailFromTemplateRequest_DEFINED
struct SendEmailFromTemplateRequest__Class;
struct SendEmailFromTemplateRequest {
    struct SendEmailFromTemplateRequest__Class* klass;
    MonitorData* monitor;
    struct SendEmailFromTemplateRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendEmailFromTemplateRequest_FWDDECL)
#define IL2CPP_STRUCT_SendEmailFromTemplateRequest_FWDDECL
#include <Modloader/app/structs/SendEmailFromTemplateRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SendEmailFromTemplateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendEmailFromTemplateRequest_DEFINED) && !defined(IL2CPP_STRUCT_SendEmailFromTemplateRequest_FWDDECL)
#include <Modloader/app/structs/SendEmailFromTemplateRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendEmailFromTemplateRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
