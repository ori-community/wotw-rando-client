#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkUtilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkUtilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkUtilities_DEFINED)
#define IL2CPP_STRUCT_AkUtilities_DEFINED
struct AkUtilities__Class;
struct AkUtilities {
    struct AkUtilities__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkUtilities_FWDDECL)
#define IL2CPP_STRUCT_AkUtilities_FWDDECL
#include <Modloader/app/structs/AkUtilities__Class.h>
#endif
#undef IL2CPP_STRUCT_AkUtilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkUtilities_DEFINED) && !defined(IL2CPP_STRUCT_AkUtilities_FWDDECL)
#include <Modloader/app/structs/AkUtilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkUtilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
