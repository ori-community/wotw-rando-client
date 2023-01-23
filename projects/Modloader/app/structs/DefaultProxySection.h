#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultProxySection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultProxySection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultProxySection_DEFINED)
#define IL2CPP_STRUCT_DefaultProxySection_DEFINED
struct DefaultProxySection__Class;
struct DefaultProxySection {
    struct DefaultProxySection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DefaultProxySection_FWDDECL)
#define IL2CPP_STRUCT_DefaultProxySection_FWDDECL
#include <Modloader/app/structs/DefaultProxySection__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultProxySection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultProxySection_DEFINED) && !defined(IL2CPP_STRUCT_DefaultProxySection_FWDDECL)
#include <Modloader/app/structs/DefaultProxySection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultProxySection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
