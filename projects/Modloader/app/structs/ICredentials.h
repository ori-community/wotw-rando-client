#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICredentials_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICredentials_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICredentials_DEFINED)
#define IL2CPP_STRUCT_ICredentials_DEFINED
struct ICredentials__Class;
struct ICredentials {
    struct ICredentials__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICredentials_FWDDECL)
#define IL2CPP_STRUCT_ICredentials_FWDDECL
#include <Modloader/app/structs/ICredentials__Class.h>
#endif
#undef IL2CPP_STRUCT_ICredentials_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICredentials_DEFINED) && !defined(IL2CPP_STRUCT_ICredentials_FWDDECL)
#include <Modloader/app/structs/ICredentials.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICredentials.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
