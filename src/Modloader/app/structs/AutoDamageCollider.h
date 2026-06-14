#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoDamageCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoDamageCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoDamageCollider_DEFINED)
#include <Modloader/app/structs/AutoDamageCollider__Fields.h>
#if defined(IL2CPP_STRUCT_AutoDamageCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoDamageCollider_DEFINED
struct AutoDamageCollider__Class;
struct AutoDamageCollider {
    struct AutoDamageCollider__Class* klass;
    MonitorData* monitor;
    struct AutoDamageCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoDamageCollider_FWDDECL)
#define IL2CPP_STRUCT_AutoDamageCollider_FWDDECL
#include <Modloader/app/structs/AutoDamageCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoDamageCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoDamageCollider_DEFINED) && !defined(IL2CPP_STRUCT_AutoDamageCollider_FWDDECL)
#include <Modloader/app/structs/AutoDamageCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoDamageCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
