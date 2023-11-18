#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Type3Message__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Type3Message__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type3Message__Fields_DEFINED)
#include <Modloader/app/structs/MessageBase__Fields.h>
#include <Modloader/app/structs/NtlmAuthLevel__Enum.h>
#if defined(IL2CPP_STRUCT_MessageBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_NtlmAuthLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_Type3Message__Fields_DEFINED
struct Byte__Array;
struct String;
struct Type2Message;
struct Type3Message__Fields {
    struct MessageBase__Fields _;
    NtlmAuthLevel__Enum _level;

    struct Byte__Array* _challenge;
    struct String* _host;
    struct String* _domain;
    struct String* _username;
    struct String* _password;
    struct Type2Message* _type2;
    struct Byte__Array* _lm;
    struct Byte__Array* _nt;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Type3Message__Fields_FWDDECL)
#define IL2CPP_STRUCT_Type3Message__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type2Message.h>
#endif
#undef IL2CPP_STRUCT_Type3Message__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type3Message__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Type3Message__Fields_FWDDECL)
#include <Modloader/app/structs/Type3Message__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Type3Message__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
