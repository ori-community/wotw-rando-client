#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompositeTriggerCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompositeTriggerCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeTriggerCollider_DEFINED)
#include <Modloader/app/structs/CompositeTriggerCollider__Fields.h>
#if defined(IL2CPP_STRUCT_CompositeTriggerCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_CompositeTriggerCollider_DEFINED
struct CompositeTriggerCollider__Class;
struct CompositeTriggerCollider {
    struct CompositeTriggerCollider__Class* klass;
    MonitorData* monitor;
    struct CompositeTriggerCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompositeTriggerCollider_FWDDECL)
#define IL2CPP_STRUCT_CompositeTriggerCollider_FWDDECL
#include <Modloader/app/structs/CompositeTriggerCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_CompositeTriggerCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeTriggerCollider_DEFINED) && !defined(IL2CPP_STRUCT_CompositeTriggerCollider_FWDDECL)
#include <Modloader/app/structs/CompositeTriggerCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompositeTriggerCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
