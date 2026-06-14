#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallbackIdentities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallbackIdentities_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackIdentities_DEFINED)
#define IL2CPP_STRUCT_CallbackIdentities_DEFINED
struct CallbackIdentities__Class;
struct CallbackIdentities {
    struct CallbackIdentities__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CallbackIdentities_FWDDECL)
#define IL2CPP_STRUCT_CallbackIdentities_FWDDECL
#include <Modloader/app/structs/CallbackIdentities__Class.h>
#endif
#undef IL2CPP_STRUCT_CallbackIdentities_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackIdentities_DEFINED) && !defined(IL2CPP_STRUCT_CallbackIdentities_FWDDECL)
#include <Modloader/app/structs/CallbackIdentities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallbackIdentities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
