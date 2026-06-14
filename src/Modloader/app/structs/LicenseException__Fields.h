#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseException__Fields_DEFINED)
#include <Modloader/app/structs/SystemException__Fields.h>
#if defined(IL2CPP_STRUCT_SystemException__Fields_DEFINED)
#define IL2CPP_STRUCT_LicenseException__Fields_DEFINED
struct Type;
struct Object;
struct LicenseException__Fields {
    struct SystemException__Fields _;
    struct Type* type;
    struct Object* instance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LicenseException__Fields_FWDDECL)
#define IL2CPP_STRUCT_LicenseException__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_LicenseException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LicenseException__Fields_FWDDECL)
#include <Modloader/app/structs/LicenseException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
