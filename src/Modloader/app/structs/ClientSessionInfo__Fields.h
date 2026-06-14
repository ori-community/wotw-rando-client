#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientSessionInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientSessionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionInfo__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_ClientSessionInfo__Fields_DEFINED
struct String;
struct Byte__Array;
struct __declspec(align(8)) ClientSessionInfo__Fields {
    bool disposed;
    struct DateTime validuntil;
    struct String* host;
    struct Byte__Array* sid;
    struct Byte__Array* masterSecret;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientSessionInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClientSessionInfo__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ClientSessionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSessionInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClientSessionInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ClientSessionInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientSessionInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
