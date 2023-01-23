#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmtpNetworkElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmtpNetworkElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmtpNetworkElement_DEFINED)
#define IL2CPP_STRUCT_SmtpNetworkElement_DEFINED
struct SmtpNetworkElement__Class;
struct SmtpNetworkElement {
    struct SmtpNetworkElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SmtpNetworkElement_FWDDECL)
#define IL2CPP_STRUCT_SmtpNetworkElement_FWDDECL
#include <Modloader/app/structs/SmtpNetworkElement__Class.h>
#endif
#undef IL2CPP_STRUCT_SmtpNetworkElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmtpNetworkElement_DEFINED) && !defined(IL2CPP_STRUCT_SmtpNetworkElement_FWDDECL)
#include <Modloader/app/structs/SmtpNetworkElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmtpNetworkElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
