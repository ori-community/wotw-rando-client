#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubjectAltNameExtension__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubjectAltNameExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubjectAltNameExtension__Fields_DEFINED)
#include <Modloader/app/structs/X509Extension_2__Fields.h>
#if defined(IL2CPP_STRUCT_X509Extension_2__Fields_DEFINED)
#define IL2CPP_STRUCT_SubjectAltNameExtension__Fields_DEFINED
struct GeneralNames;
struct SubjectAltNameExtension__Fields {
    struct X509Extension_2__Fields _;
    struct GeneralNames* _names;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SubjectAltNameExtension__Fields_FWDDECL)
#define IL2CPP_STRUCT_SubjectAltNameExtension__Fields_FWDDECL
#include <Modloader/app/structs/GeneralNames.h>
#endif
#undef IL2CPP_STRUCT_SubjectAltNameExtension__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubjectAltNameExtension__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SubjectAltNameExtension__Fields_FWDDECL)
#include <Modloader/app/structs/SubjectAltNameExtension__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubjectAltNameExtension__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
