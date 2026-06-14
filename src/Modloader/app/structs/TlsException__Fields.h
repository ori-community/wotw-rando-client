#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsException__Fields_DEFINED)
#include <Modloader/app/structs/Exception__Fields.h>
#if defined(IL2CPP_STRUCT_Exception__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsException__Fields_DEFINED
struct Alert;
struct TlsException__Fields {
    struct Exception__Fields _;
    struct Alert* alert;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsException__Fields_FWDDECL)
#define IL2CPP_STRUCT_TlsException__Fields_FWDDECL
#include <Modloader/app/structs/Alert.h>
#endif
#undef IL2CPP_STRUCT_TlsException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TlsException__Fields_FWDDECL)
#include <Modloader/app/structs/TlsException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
