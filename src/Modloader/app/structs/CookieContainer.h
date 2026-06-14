#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieContainer_DEFINED)
#include <Modloader/app/structs/CookieContainer__Fields.h>
#if defined(IL2CPP_STRUCT_CookieContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieContainer_DEFINED
struct CookieContainer__Class;
struct CookieContainer {
    struct CookieContainer__Class* klass;
    MonitorData* monitor;
    struct CookieContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CookieContainer_FWDDECL)
#define IL2CPP_STRUCT_CookieContainer_FWDDECL
#include <Modloader/app/structs/CookieContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_CookieContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieContainer_DEFINED) && !defined(IL2CPP_STRUCT_CookieContainer_FWDDECL)
#include <Modloader/app/structs/CookieContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
