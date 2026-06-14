#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggerColliderCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggerColliderCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerColliderCallback_DEFINED)
#include <Modloader/app/structs/TriggerColliderCallback__Fields.h>
#if defined(IL2CPP_STRUCT_TriggerColliderCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggerColliderCallback_DEFINED
struct TriggerColliderCallback__Class;
struct TriggerColliderCallback {
    struct TriggerColliderCallback__Class* klass;
    MonitorData* monitor;
    struct TriggerColliderCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggerColliderCallback_FWDDECL)
#define IL2CPP_STRUCT_TriggerColliderCallback_FWDDECL
#include <Modloader/app/structs/TriggerColliderCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_TriggerColliderCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggerColliderCallback_DEFINED) && !defined(IL2CPP_STRUCT_TriggerColliderCallback_FWDDECL)
#include <Modloader/app/structs/TriggerColliderCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggerColliderCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
