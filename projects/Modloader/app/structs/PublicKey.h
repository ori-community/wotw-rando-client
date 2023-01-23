#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PublicKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PublicKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_PublicKey_DEFINED)
#include <Modloader/app/structs/PublicKey__Fields.h>
#if defined(IL2CPP_STRUCT_PublicKey__Fields_DEFINED)
#define IL2CPP_STRUCT_PublicKey_DEFINED
struct PublicKey__Class;
struct PublicKey {
    struct PublicKey__Class* klass;
    MonitorData* monitor;
    struct PublicKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PublicKey_FWDDECL)
#define IL2CPP_STRUCT_PublicKey_FWDDECL
#include <Modloader/app/structs/PublicKey__Class.h>
#endif
#undef IL2CPP_STRUCT_PublicKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_PublicKey_DEFINED) && !defined(IL2CPP_STRUCT_PublicKey_FWDDECL)
#include <Modloader/app/structs/PublicKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PublicKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
