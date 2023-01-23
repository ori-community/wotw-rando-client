#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContributeEnvoySink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContributeEnvoySink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeEnvoySink_DEFINED)
#define IL2CPP_STRUCT_IContributeEnvoySink_DEFINED
struct IContributeEnvoySink__Class;
struct IContributeEnvoySink {
    struct IContributeEnvoySink__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContributeEnvoySink_FWDDECL)
#define IL2CPP_STRUCT_IContributeEnvoySink_FWDDECL
#include <Modloader/app/structs/IContributeEnvoySink__Class.h>
#endif
#undef IL2CPP_STRUCT_IContributeEnvoySink_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContributeEnvoySink_DEFINED) && !defined(IL2CPP_STRUCT_IContributeEnvoySink_FWDDECL)
#include <Modloader/app/structs/IContributeEnvoySink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContributeEnvoySink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
