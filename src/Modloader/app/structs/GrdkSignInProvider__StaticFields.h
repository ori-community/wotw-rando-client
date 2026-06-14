#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_DEFINED
struct String;
struct GrdkSignInProvider;
struct GrdkSignInProvider__StaticFields {
    struct String* m_linkToken;
    bool m_hasRequestedToken;
    struct GrdkSignInProvider* _Instance_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_FWDDECL
#include <Modloader/app/structs/GrdkSignInProvider.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GrdkSignInProvider__StaticFields_FWDDECL)
#include <Modloader/app/structs/GrdkSignInProvider__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrdkSignInProvider__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
