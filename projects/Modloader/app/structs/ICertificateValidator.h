#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICertificateValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICertificateValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICertificateValidator_DEFINED)
#define IL2CPP_STRUCT_ICertificateValidator_DEFINED
struct ICertificateValidator__Class;
struct ICertificateValidator {
    struct ICertificateValidator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICertificateValidator_FWDDECL)
#define IL2CPP_STRUCT_ICertificateValidator_FWDDECL
#include <Modloader/app/structs/ICertificateValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_ICertificateValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICertificateValidator_DEFINED) && !defined(IL2CPP_STRUCT_ICertificateValidator_FWDDECL)
#include <Modloader/app/structs/ICertificateValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICertificateValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
