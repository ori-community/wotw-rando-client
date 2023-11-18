#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsCipherSuite__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsCipherSuite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsCipherSuite__Fields_DEFINED)
#include <Modloader/app/structs/CipherSuite__Fields.h>
#if defined(IL2CPP_STRUCT_CipherSuite__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsCipherSuite__Fields_DEFINED
struct Byte__Array;
struct Object;
struct TlsCipherSuite__Fields {
    struct CipherSuite__Fields _;
    struct Byte__Array* header;
    struct Object* headerLock;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsCipherSuite__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsCipherSuite__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_TlsCipherSuite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsCipherSuite__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsCipherSuite__Fields_FWDDECL)
#include <Modloader/app/structs/TlsCipherSuite__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsCipherSuite__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
