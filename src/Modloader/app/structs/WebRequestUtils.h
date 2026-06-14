#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebRequestUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebRequestUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequestUtils_DEFINED)
#define IL2CPP_STRUCT_WebRequestUtils_DEFINED
struct WebRequestUtils__Class;
struct WebRequestUtils {
    struct WebRequestUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WebRequestUtils_FWDDECL)
#define IL2CPP_STRUCT_WebRequestUtils_FWDDECL
#include <Modloader/app/structs/WebRequestUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_WebRequestUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequestUtils_DEFINED) && !defined(IL2CPP_STRUCT_WebRequestUtils_FWDDECL)
#include <Modloader/app/structs/WebRequestUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebRequestUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
