#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetworkCredential__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetworkCredential__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkCredential__Fields_DEFINED)
#define IL2CPP_STRUCT_NetworkCredential__Fields_DEFINED
struct String;
struct SecureString;
struct __declspec(align(8)) NetworkCredential__Fields {
    struct String* m_domain;
    struct String* m_userName;
    struct SecureString* m_password;
};
#endif
#if !defined(IL2CPP_STRUCT_NetworkCredential__Fields_FWDDECL)
#define IL2CPP_STRUCT_NetworkCredential__Fields_FWDDECL
#include <Modloader/app/structs/SecureString.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NetworkCredential__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetworkCredential__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NetworkCredential__Fields_FWDDECL)
#include <Modloader/app/structs/NetworkCredential__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetworkCredential__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
