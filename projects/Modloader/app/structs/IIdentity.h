#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_IIdentity_DEFINED)
#define IL2CPP_STRUCT_IIdentity_DEFINED
struct IIdentity__Class;
struct IIdentity {
    struct IIdentity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IIdentity_FWDDECL)
#define IL2CPP_STRUCT_IIdentity_FWDDECL
#include <Modloader/app/structs/IIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_IIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_IIdentity_DEFINED) && !defined(IL2CPP_STRUCT_IIdentity_FWDDECL)
#include <Modloader/app/structs/IIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
