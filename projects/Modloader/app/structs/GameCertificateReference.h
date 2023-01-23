#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameCertificateReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameCertificateReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameCertificateReference_DEFINED)
#include <Modloader/app/structs/GameCertificateReference__Fields.h>
#if defined(IL2CPP_STRUCT_GameCertificateReference__Fields_DEFINED)
#define IL2CPP_STRUCT_GameCertificateReference_DEFINED
struct GameCertificateReference__Class;
struct GameCertificateReference {
    struct GameCertificateReference__Class* klass;
    MonitorData* monitor;
    struct GameCertificateReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameCertificateReference_FWDDECL)
#define IL2CPP_STRUCT_GameCertificateReference_FWDDECL
#include <Modloader/app/structs/GameCertificateReference__Class.h>
#endif
#undef IL2CPP_STRUCT_GameCertificateReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameCertificateReference_DEFINED) && !defined(IL2CPP_STRUCT_GameCertificateReference_FWDDECL)
#include <Modloader/app/structs/GameCertificateReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameCertificateReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
