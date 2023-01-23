#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecureStringHasher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecureStringHasher_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecureStringHasher_DEFINED)
#include <Modloader/app/structs/SecureStringHasher__Fields.h>
#if defined(IL2CPP_STRUCT_SecureStringHasher__Fields_DEFINED)
#define IL2CPP_STRUCT_SecureStringHasher_DEFINED
struct SecureStringHasher__Class;
struct SecureStringHasher {
    struct SecureStringHasher__Class* klass;
    MonitorData* monitor;
    struct SecureStringHasher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecureStringHasher_FWDDECL)
#define IL2CPP_STRUCT_SecureStringHasher_FWDDECL
#include <Modloader/app/structs/SecureStringHasher__Class.h>
#endif
#undef IL2CPP_STRUCT_SecureStringHasher_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecureStringHasher_DEFINED) && !defined(IL2CPP_STRUCT_SecureStringHasher_FWDDECL)
#include <Modloader/app/structs/SecureStringHasher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecureStringHasher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
