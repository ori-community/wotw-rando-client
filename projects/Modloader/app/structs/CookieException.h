#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieException_DEFINED)
#include <Modloader/app/structs/CookieException__Fields.h>
#if defined(IL2CPP_STRUCT_CookieException__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieException_DEFINED
struct CookieException__Class;
struct CookieException {
    struct CookieException__Class* klass;
    MonitorData* monitor;
    struct CookieException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CookieException_FWDDECL)
#define IL2CPP_STRUCT_CookieException_FWDDECL
#include <Modloader/app/structs/CookieException__Class.h>
#endif
#undef IL2CPP_STRUCT_CookieException_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieException_DEFINED) && !defined(IL2CPP_STRUCT_CookieException_FWDDECL)
#include <Modloader/app/structs/CookieException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
