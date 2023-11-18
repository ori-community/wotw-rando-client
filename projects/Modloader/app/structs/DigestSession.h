#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigestSession_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigestSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestSession_DEFINED)
#include <Modloader/app/structs/DigestSession__Fields.h>
#if defined(IL2CPP_STRUCT_DigestSession__Fields_DEFINED)
#define IL2CPP_STRUCT_DigestSession_DEFINED
struct DigestSession__Class;
struct DigestSession {
    struct DigestSession__Class* klass;
    MonitorData* monitor;
    struct DigestSession__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DigestSession_FWDDECL)
#define IL2CPP_STRUCT_DigestSession_FWDDECL
#include <Modloader/app/structs/DigestSession__Class.h>
#endif
#undef IL2CPP_STRUCT_DigestSession_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestSession_DEFINED) && !defined(IL2CPP_STRUCT_DigestSession_FWDDECL)
#include <Modloader/app/structs/DigestSession.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigestSession.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
