#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionBasedGameObjectActivator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionBasedGameObjectActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionBasedGameObjectActivator_DEFINED)
#include <Modloader/app/structs/ConditionBasedGameObjectActivator__Fields.h>
#if defined(IL2CPP_STRUCT_ConditionBasedGameObjectActivator__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionBasedGameObjectActivator_DEFINED
struct ConditionBasedGameObjectActivator__Class;
struct ConditionBasedGameObjectActivator {
    struct ConditionBasedGameObjectActivator__Class* klass;
    MonitorData* monitor;
    struct ConditionBasedGameObjectActivator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionBasedGameObjectActivator_FWDDECL)
#define IL2CPP_STRUCT_ConditionBasedGameObjectActivator_FWDDECL
#include <Modloader/app/structs/ConditionBasedGameObjectActivator__Class.h>
#endif
#undef IL2CPP_STRUCT_ConditionBasedGameObjectActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionBasedGameObjectActivator_DEFINED) && !defined(IL2CPP_STRUCT_ConditionBasedGameObjectActivator_FWDDECL)
#include <Modloader/app/structs/ConditionBasedGameObjectActivator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionBasedGameObjectActivator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
