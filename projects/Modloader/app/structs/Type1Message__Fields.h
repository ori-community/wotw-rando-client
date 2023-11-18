#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Type1Message__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Type1Message__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type1Message__Fields_DEFINED)
#include <Modloader/app/structs/MessageBase__Fields.h>
#if defined(IL2CPP_STRUCT_MessageBase__Fields_DEFINED)
#define IL2CPP_STRUCT_Type1Message__Fields_DEFINED
struct String;
struct Type1Message__Fields {
    struct MessageBase__Fields _;
    struct String* _host;
    struct String* _domain;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Type1Message__Fields_FWDDECL)
#define IL2CPP_STRUCT_Type1Message__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Type1Message__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Type1Message__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Type1Message__Fields_FWDDECL)
#include <Modloader/app/structs/Type1Message__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Type1Message__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
