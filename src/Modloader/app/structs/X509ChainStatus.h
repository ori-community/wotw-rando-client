#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainStatus_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainStatus_DEFINED)
#include <Modloader/app/structs/X509ChainStatusFlags__Enum.h>
#if defined(IL2CPP_STRUCT_X509ChainStatusFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_X509ChainStatus_DEFINED
struct String;
struct X509ChainStatus {
    X509ChainStatusFlags__Enum status;

    struct String* info;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainStatus_FWDDECL)
#define IL2CPP_STRUCT_X509ChainStatus_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_X509ChainStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainStatus_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainStatus_FWDDECL)
#include <Modloader/app/structs/X509ChainStatus.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainStatus.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
