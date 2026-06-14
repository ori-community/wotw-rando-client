#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MissingMemberException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MissingMemberException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MissingMemberException__Fields_DEFINED)
#include <Modloader/app/structs/MemberAccessException__Fields.h>
#if defined(IL2CPP_STRUCT_MemberAccessException__Fields_DEFINED)
#define IL2CPP_STRUCT_MissingMemberException__Fields_DEFINED
struct String;
struct Byte__Array;
struct MissingMemberException__Fields {
    struct MemberAccessException__Fields _;
    struct String* ClassName;
    struct String* MemberName;
    struct Byte__Array* Signature;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MissingMemberException__Fields_FWDDECL)
#define IL2CPP_STRUCT_MissingMemberException__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MissingMemberException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MissingMemberException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MissingMemberException__Fields_FWDDECL)
#include <Modloader/app/structs/MissingMemberException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MissingMemberException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
