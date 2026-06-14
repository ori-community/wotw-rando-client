#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Type2Message__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Type2Message__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type2Message__Fields_DEFINED)
#include <Modloader/app/structs/MessageBase__Fields.h>
#if defined(IL2CPP_STRUCT_MessageBase__Fields_DEFINED)
#define IL2CPP_STRUCT_Type2Message__Fields_DEFINED
struct Byte__Array;
struct String;
struct Type2Message__Fields {
    struct MessageBase__Fields _;
    struct Byte__Array* _nonce;
    struct String* _targetName;
    struct Byte__Array* _targetInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Type2Message__Fields_FWDDECL)
#define IL2CPP_STRUCT_Type2Message__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Type2Message__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type2Message__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Type2Message__Fields_FWDDECL)
#include <Modloader/app/structs/Type2Message__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Type2Message__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
