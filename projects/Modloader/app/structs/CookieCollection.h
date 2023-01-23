#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieCollection_DEFINED)
#include <Modloader/app/structs/CookieCollection__Fields.h>
#if defined(IL2CPP_STRUCT_CookieCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieCollection_DEFINED
struct CookieCollection__Class;
struct CookieCollection {
    struct CookieCollection__Class* klass;
    MonitorData* monitor;
    struct CookieCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CookieCollection_FWDDECL)
#define IL2CPP_STRUCT_CookieCollection_FWDDECL
#include <Modloader/app/structs/CookieCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_CookieCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieCollection_DEFINED) && !defined(IL2CPP_STRUCT_CookieCollection_FWDDECL)
#include <Modloader/app/structs/CookieCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
