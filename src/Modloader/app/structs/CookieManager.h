#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieManager_DEFINED)
#include <Modloader/app/structs/CookieManager__Fields.h>
#if defined(IL2CPP_STRUCT_CookieManager__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieManager_DEFINED
struct CookieManager__Class;
struct CookieManager {
    struct CookieManager__Class* klass;
    MonitorData* monitor;
    struct CookieManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CookieManager_FWDDECL)
#define IL2CPP_STRUCT_CookieManager_FWDDECL
#include <Modloader/app/structs/CookieManager__Class.h>
#endif
#undef IL2CPP_STRUCT_CookieManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieManager_DEFINED) && !defined(IL2CPP_STRUCT_CookieManager_FWDDECL)
#include <Modloader/app/structs/CookieManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
