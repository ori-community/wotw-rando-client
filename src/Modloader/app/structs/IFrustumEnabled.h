#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFrustumEnabled_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFrustumEnabled_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFrustumEnabled_DEFINED)
#define IL2CPP_STRUCT_IFrustumEnabled_DEFINED
struct IFrustumEnabled__Class;
struct IFrustumEnabled {
    struct IFrustumEnabled__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFrustumEnabled_FWDDECL)
#define IL2CPP_STRUCT_IFrustumEnabled_FWDDECL
#include <Modloader/app/structs/IFrustumEnabled__Class.h>
#endif
#undef IL2CPP_STRUCT_IFrustumEnabled_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFrustumEnabled_DEFINED) && !defined(IL2CPP_STRUCT_IFrustumEnabled_FWDDECL)
#include <Modloader/app/structs/IFrustumEnabled.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFrustumEnabled.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
