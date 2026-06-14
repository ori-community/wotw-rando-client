#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MailAddress_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MailAddress_INITIALIZING
#if !defined(IL2CPP_STRUCT_MailAddress_DEFINED)
#include <Modloader/app/structs/MailAddress__Fields.h>
#if defined(IL2CPP_STRUCT_MailAddress__Fields_DEFINED)
#define IL2CPP_STRUCT_MailAddress_DEFINED
struct MailAddress__Class;
struct MailAddress {
    struct MailAddress__Class* klass;
    MonitorData* monitor;
    struct MailAddress__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MailAddress_FWDDECL)
#define IL2CPP_STRUCT_MailAddress_FWDDECL
#include <Modloader/app/structs/MailAddress__Class.h>
#endif
#undef IL2CPP_STRUCT_MailAddress_INITIALIZING
#if !defined(IL2CPP_STRUCT_MailAddress_DEFINED) && !defined(IL2CPP_STRUCT_MailAddress_FWDDECL)
#include <Modloader/app/structs/MailAddress.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MailAddress.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
