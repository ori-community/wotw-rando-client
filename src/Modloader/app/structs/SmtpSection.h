#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmtpSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmtpSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmtpSection_DEFINED)
#define IL2CPP_STRUCT_SmtpSection_DEFINED
struct SmtpSection__Class;
struct SmtpSection {
    struct SmtpSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SmtpSection_FWDDECL)
#define IL2CPP_STRUCT_SmtpSection_FWDDECL
#include <Modloader/app/structs/SmtpSection__Class.h>
#endif
#undef IL2CPP_STRUCT_SmtpSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmtpSection_DEFINED) && !defined(IL2CPP_STRUCT_SmtpSection_FWDDECL)
#include <Modloader/app/structs/SmtpSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmtpSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
