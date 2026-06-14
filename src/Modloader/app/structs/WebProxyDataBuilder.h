#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebProxyDataBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebProxyDataBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxyDataBuilder_DEFINED)
#include <Modloader/app/structs/WebProxyDataBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_WebProxyDataBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_WebProxyDataBuilder_DEFINED
struct WebProxyDataBuilder__Class;
struct WebProxyDataBuilder {
    struct WebProxyDataBuilder__Class* klass;
    MonitorData* monitor;
    struct WebProxyDataBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebProxyDataBuilder_FWDDECL)
#define IL2CPP_STRUCT_WebProxyDataBuilder_FWDDECL
#include <Modloader/app/structs/WebProxyDataBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_WebProxyDataBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebProxyDataBuilder_DEFINED) && !defined(IL2CPP_STRUCT_WebProxyDataBuilder_FWDDECL)
#include <Modloader/app/structs/WebProxyDataBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebProxyDataBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
