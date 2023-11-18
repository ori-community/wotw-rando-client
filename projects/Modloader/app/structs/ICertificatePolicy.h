#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICertificatePolicy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICertificatePolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICertificatePolicy_DEFINED)
#define IL2CPP_STRUCT_ICertificatePolicy_DEFINED
struct ICertificatePolicy__Class;
struct ICertificatePolicy {
    struct ICertificatePolicy__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICertificatePolicy_FWDDECL)
#define IL2CPP_STRUCT_ICertificatePolicy_FWDDECL
#include <Modloader/app/structs/ICertificatePolicy__Class.h>
#endif
#undef IL2CPP_STRUCT_ICertificatePolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICertificatePolicy_DEFINED) && !defined(IL2CPP_STRUCT_ICertificatePolicy_FWDDECL)
#include <Modloader/app/structs/ICertificatePolicy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICertificatePolicy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
