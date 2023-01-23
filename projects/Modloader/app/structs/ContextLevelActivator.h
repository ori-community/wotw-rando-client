#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContextLevelActivator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContextLevelActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextLevelActivator_DEFINED)
#include <Modloader/app/structs/ContextLevelActivator__Fields.h>
#if defined(IL2CPP_STRUCT_ContextLevelActivator__Fields_DEFINED)
#define IL2CPP_STRUCT_ContextLevelActivator_DEFINED
struct ContextLevelActivator__Class;
struct ContextLevelActivator {
    struct ContextLevelActivator__Class* klass;
    MonitorData* monitor;
    struct ContextLevelActivator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContextLevelActivator_FWDDECL)
#define IL2CPP_STRUCT_ContextLevelActivator_FWDDECL
#include <Modloader/app/structs/ContextLevelActivator__Class.h>
#endif
#undef IL2CPP_STRUCT_ContextLevelActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextLevelActivator_DEFINED) && !defined(IL2CPP_STRUCT_ContextLevelActivator_FWDDECL)
#include <Modloader/app/structs/ContextLevelActivator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContextLevelActivator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
