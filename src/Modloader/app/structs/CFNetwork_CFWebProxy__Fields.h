#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_DEFINED)
#define IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_DEFINED
struct ICredentials;
struct __declspec(align(8)) CFNetwork_CFWebProxy__Fields {
    struct ICredentials* credentials;
    bool userSpecified;
};
#endif
#if !defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_FWDDECL
#include <Modloader/app/structs/ICredentials.h>
#endif
#undef IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CFNetwork_CFWebProxy__Fields_FWDDECL)
#include <Modloader/app/structs/CFNetwork_CFWebProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CFNetwork_CFWebProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
