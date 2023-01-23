#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HMAC_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HMAC_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMAC_DEFINED)
#include <Modloader/app/structs/HMAC__Fields.h>
#if defined(IL2CPP_STRUCT_HMAC__Fields_DEFINED)
#define IL2CPP_STRUCT_HMAC_DEFINED
struct HMAC__Class;
struct HMAC {
    struct HMAC__Class* klass;
    MonitorData* monitor;
    struct HMAC__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HMAC_FWDDECL)
#define IL2CPP_STRUCT_HMAC_FWDDECL
#include <Modloader/app/structs/HMAC__Class.h>
#endif
#undef IL2CPP_STRUCT_HMAC_INITIALIZING
#if !defined(IL2CPP_STRUCT_HMAC_DEFINED) && !defined(IL2CPP_STRUCT_HMAC_FWDDECL)
#include <Modloader/app/structs/HMAC.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HMAC.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
