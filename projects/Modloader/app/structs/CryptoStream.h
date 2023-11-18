#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CryptoStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CryptoStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoStream_DEFINED)
#include <Modloader/app/structs/CryptoStream__Fields.h>
#if defined(IL2CPP_STRUCT_CryptoStream__Fields_DEFINED)
#define IL2CPP_STRUCT_CryptoStream_DEFINED
struct CryptoStream__Class;
struct CryptoStream {
    struct CryptoStream__Class* klass;
    MonitorData* monitor;
    struct CryptoStream__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CryptoStream_FWDDECL)
#define IL2CPP_STRUCT_CryptoStream_FWDDECL
#include <Modloader/app/structs/CryptoStream__Class.h>
#endif
#undef IL2CPP_STRUCT_CryptoStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_CryptoStream_DEFINED) && !defined(IL2CPP_STRUCT_CryptoStream_FWDDECL)
#include <Modloader/app/structs/CryptoStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CryptoStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
