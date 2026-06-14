#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtility_DEFINED)
#define IL2CPP_STRUCT_WebUtility_DEFINED
struct WebUtility__Class;
struct WebUtility {
    struct WebUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WebUtility_FWDDECL)
#define IL2CPP_STRUCT_WebUtility_FWDDECL
#include <Modloader/app/structs/WebUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_WebUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtility_DEFINED) && !defined(IL2CPP_STRUCT_WebUtility_FWDDECL)
#include <Modloader/app/structs/WebUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
