#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstructionLevelActivator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstructionLevelActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionLevelActivator_DEFINED)
#define IL2CPP_STRUCT_ConstructionLevelActivator_DEFINED
struct ConstructionLevelActivator__Class;
struct ConstructionLevelActivator {
    struct ConstructionLevelActivator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstructionLevelActivator_FWDDECL)
#define IL2CPP_STRUCT_ConstructionLevelActivator_FWDDECL
#include <Modloader/app/structs/ConstructionLevelActivator__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstructionLevelActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionLevelActivator_DEFINED) && !defined(IL2CPP_STRUCT_ConstructionLevelActivator_FWDDECL)
#include <Modloader/app/structs/ConstructionLevelActivator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstructionLevelActivator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
