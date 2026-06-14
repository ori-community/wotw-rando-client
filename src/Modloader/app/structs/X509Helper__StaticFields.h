#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509Helper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509Helper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Helper__StaticFields_DEFINED)
#define IL2CPP_STRUCT_X509Helper__StaticFields_DEFINED
struct INativeCertificateHelper;
struct X509Helper__StaticFields {
    struct INativeCertificateHelper* nativeHelper;
};
#endif
#if !defined(IL2CPP_STRUCT_X509Helper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_X509Helper__StaticFields_FWDDECL
#include <Modloader/app/structs/INativeCertificateHelper.h>
#endif
#undef IL2CPP_STRUCT_X509Helper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509Helper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_X509Helper__StaticFields_FWDDECL)
#include <Modloader/app/structs/X509Helper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509Helper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
