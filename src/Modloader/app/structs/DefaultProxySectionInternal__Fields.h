#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_DEFINED
struct IWebProxy;
struct __declspec(align(8)) DefaultProxySectionInternal__Fields {
    struct IWebProxy* webProxy;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_FWDDECL)
#define IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_FWDDECL
#include <Modloader/app/structs/IWebProxy.h>
#endif
#undef IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DefaultProxySectionInternal__Fields_FWDDECL)
#include <Modloader/app/structs/DefaultProxySectionInternal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultProxySectionInternal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
