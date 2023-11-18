#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NclUtilities__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NclUtilities__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NclUtilities__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NclUtilities__StaticFields_DEFINED
struct ContextCallback;
struct IPAddress__Array;
struct Object;
struct String;
struct NclUtilities__StaticFields {
    struct ContextCallback* s_ContextRelativeDemandCallback;
    struct IPAddress__Array* _LocalAddresses;
    struct Object* _LocalAddressesLock;
    struct String* _LocalDomainName;
};
#endif
#if !defined(IL2CPP_STRUCT_NclUtilities__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NclUtilities__StaticFields_FWDDECL
#include <Modloader/app/structs/ContextCallback.h>
#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NclUtilities__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NclUtilities__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NclUtilities__StaticFields_FWDDECL)
#include <Modloader/app/structs/NclUtilities__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NclUtilities__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
