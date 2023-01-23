#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityParameters__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityParameters__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityParameters__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityParameters__Fields_DEFINED
struct CipherSuite;
struct Byte__Array;
struct __declspec(align(8)) SecurityParameters__Fields {
    struct CipherSuite* cipher;
    struct Byte__Array* clientWriteMAC;
    struct Byte__Array* serverWriteMAC;
};
#endif
#if !defined(IL2CPP_STRUCT_SecurityParameters__Fields_FWDDECL)
#define IL2CPP_STRUCT_SecurityParameters__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherSuite.h>
#endif
#undef IL2CPP_STRUCT_SecurityParameters__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityParameters__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SecurityParameters__Fields_FWDDECL)
#include <Modloader/app/structs/SecurityParameters__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityParameters__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
