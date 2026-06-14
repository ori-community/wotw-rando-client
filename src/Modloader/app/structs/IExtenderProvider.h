#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IExtenderProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IExtenderProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExtenderProvider_DEFINED)
#define IL2CPP_STRUCT_IExtenderProvider_DEFINED
struct IExtenderProvider__Class;
struct IExtenderProvider {
    struct IExtenderProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IExtenderProvider_FWDDECL)
#define IL2CPP_STRUCT_IExtenderProvider_FWDDECL
#include <Modloader/app/structs/IExtenderProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IExtenderProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExtenderProvider_DEFINED) && !defined(IL2CPP_STRUCT_IExtenderProvider_FWDDECL)
#include <Modloader/app/structs/IExtenderProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IExtenderProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
