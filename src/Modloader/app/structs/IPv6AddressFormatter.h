#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPv6AddressFormatter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPv6AddressFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPv6AddressFormatter_DEFINED)
#define IL2CPP_STRUCT_IPv6AddressFormatter_DEFINED
struct UInt16__Array;
struct IPv6AddressFormatter {
    struct UInt16__Array* address;
    int64_t scopeId;
};
#endif
#if !defined(IL2CPP_STRUCT_IPv6AddressFormatter_FWDDECL)
#define IL2CPP_STRUCT_IPv6AddressFormatter_FWDDECL
#include <Modloader/app/structs/UInt16__Array.h>
#endif
#undef IL2CPP_STRUCT_IPv6AddressFormatter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPv6AddressFormatter_DEFINED) && !defined(IL2CPP_STRUCT_IPv6AddressFormatter_FWDDECL)
#include <Modloader/app/structs/IPv6AddressFormatter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPv6AddressFormatter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
