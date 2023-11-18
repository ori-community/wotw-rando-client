#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPAddress__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPAddress__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPAddress__Fields_DEFINED)
#include <Modloader/app/structs/AddressFamily__Enum.h>
#if defined(IL2CPP_STRUCT_AddressFamily__Enum_DEFINED)
#define IL2CPP_STRUCT_IPAddress__Fields_DEFINED
struct String;
struct UInt16__Array;
struct __declspec(align(8)) IPAddress__Fields {
    int64_t m_Address;
    struct String* m_ToString;
    AddressFamily__Enum m_Family;

    struct UInt16__Array* m_Numbers;
    int64_t m_ScopeId;
    int32_t m_HashCode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IPAddress__Fields_FWDDECL)
#define IL2CPP_STRUCT_IPAddress__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UInt16__Array.h>
#endif
#undef IL2CPP_STRUCT_IPAddress__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPAddress__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IPAddress__Fields_FWDDECL)
#include <Modloader/app/structs/IPAddress__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPAddress__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
