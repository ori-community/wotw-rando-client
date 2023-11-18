#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalRemotingServices__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalRemotingServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalRemotingServices__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InternalRemotingServices__StaticFields_DEFINED
struct Hashtable;
struct InternalRemotingServices__StaticFields {
    struct Hashtable* _soapAttributes;
};
#endif
#if !defined(IL2CPP_STRUCT_InternalRemotingServices__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InternalRemotingServices__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#endif
#undef IL2CPP_STRUCT_InternalRemotingServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalRemotingServices__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InternalRemotingServices__StaticFields_FWDDECL)
#include <Modloader/app/structs/InternalRemotingServices__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalRemotingServices__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
