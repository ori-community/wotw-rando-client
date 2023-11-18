#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SingletonIdentity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SingletonIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingletonIdentity__Fields_DEFINED)
#include <Modloader/app/structs/ServerIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_ServerIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_SingletonIdentity__Fields_DEFINED
struct SingletonIdentity__Fields {
    struct ServerIdentity__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SingletonIdentity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SingletonIdentity__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SingletonIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingletonIdentity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SingletonIdentity__Fields_FWDDECL)
#include <Modloader/app/structs/SingletonIdentity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SingletonIdentity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
