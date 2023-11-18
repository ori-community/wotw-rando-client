#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RSAEncryptionPadding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RSAEncryptionPadding_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding_DEFINED)
#include <Modloader/app/structs/RSAEncryptionPadding__Fields.h>
#if defined(IL2CPP_STRUCT_RSAEncryptionPadding__Fields_DEFINED)
#define IL2CPP_STRUCT_RSAEncryptionPadding_DEFINED
struct RSAEncryptionPadding__Class;
struct RSAEncryptionPadding {
    struct RSAEncryptionPadding__Class* klass;
    MonitorData* monitor;
    struct RSAEncryptionPadding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding_FWDDECL)
#define IL2CPP_STRUCT_RSAEncryptionPadding_FWDDECL
#include <Modloader/app/structs/RSAEncryptionPadding__Class.h>
#endif
#undef IL2CPP_STRUCT_RSAEncryptionPadding_INITIALIZING
#if !defined(IL2CPP_STRUCT_RSAEncryptionPadding_DEFINED) && !defined(IL2CPP_STRUCT_RSAEncryptionPadding_FWDDECL)
#include <Modloader/app/structs/RSAEncryptionPadding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RSAEncryptionPadding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
