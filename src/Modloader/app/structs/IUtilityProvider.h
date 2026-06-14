#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUtilityProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUtilityProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUtilityProvider_DEFINED)
#define IL2CPP_STRUCT_IUtilityProvider_DEFINED
struct IUtilityProvider__Class;
struct IUtilityProvider {
    struct IUtilityProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUtilityProvider_FWDDECL)
#define IL2CPP_STRUCT_IUtilityProvider_FWDDECL
#include <Modloader/app/structs/IUtilityProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IUtilityProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUtilityProvider_DEFINED) && !defined(IL2CPP_STRUCT_IUtilityProvider_FWDDECL)
#include <Modloader/app/structs/IUtilityProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUtilityProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
