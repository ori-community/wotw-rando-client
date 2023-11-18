#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpProtocolUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpProtocolUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpProtocolUtils_DEFINED)
#define IL2CPP_STRUCT_HttpProtocolUtils_DEFINED
struct HttpProtocolUtils__Class;
struct HttpProtocolUtils {
    struct HttpProtocolUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpProtocolUtils_FWDDECL)
#define IL2CPP_STRUCT_HttpProtocolUtils_FWDDECL
#include <Modloader/app/structs/HttpProtocolUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpProtocolUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpProtocolUtils_DEFINED) && !defined(IL2CPP_STRUCT_HttpProtocolUtils_FWDDECL)
#include <Modloader/app/structs/HttpProtocolUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpProtocolUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
