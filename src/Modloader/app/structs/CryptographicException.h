#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CryptographicException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CryptographicException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptographicException_DEFINED)
#include <Modloader/app/structs/CryptographicException__Fields.h>
#if defined(IL2CPP_STRUCT_CryptographicException__Fields_DEFINED)
#define IL2CPP_STRUCT_CryptographicException_DEFINED
struct CryptographicException__Class;
struct CryptographicException {
    struct CryptographicException__Class* klass;
    MonitorData* monitor;
    struct CryptographicException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CryptographicException_FWDDECL)
#define IL2CPP_STRUCT_CryptographicException_FWDDECL
#include <Modloader/app/structs/CryptographicException__Class.h>
#endif
#undef IL2CPP_STRUCT_CryptographicException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptographicException_DEFINED) && !defined(IL2CPP_STRUCT_CryptographicException_FWDDECL)
#include <Modloader/app/structs/CryptographicException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CryptographicException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
