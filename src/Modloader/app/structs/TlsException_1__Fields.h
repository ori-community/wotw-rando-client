#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsException_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsException_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsException_1__Fields_DEFINED)
#include <Modloader/app/structs/Exception__Fields.h>
#if defined(IL2CPP_STRUCT_Exception__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsException_1__Fields_DEFINED
struct Alert_1;
struct TlsException_1__Fields {
    struct Exception__Fields _;
    struct Alert_1* alert;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsException_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsException_1__Fields_FWDDECL
#include <Modloader/app/structs/Alert_1.h>
#endif
#undef IL2CPP_STRUCT_TlsException_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsException_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsException_1__Fields_FWDDECL)
#include <Modloader/app/structs/TlsException_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsException_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
