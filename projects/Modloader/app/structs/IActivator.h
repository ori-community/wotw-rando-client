#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IActivator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IActivator_DEFINED)
#define IL2CPP_STRUCT_IActivator_DEFINED
struct IActivator__Class;
struct IActivator {
    struct IActivator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IActivator_FWDDECL)
#define IL2CPP_STRUCT_IActivator_FWDDECL
#include <Modloader/app/structs/IActivator__Class.h>
#endif
#undef IL2CPP_STRUCT_IActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IActivator_DEFINED) && !defined(IL2CPP_STRUCT_IActivator_FWDDECL)
#include <Modloader/app/structs/IActivator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IActivator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
