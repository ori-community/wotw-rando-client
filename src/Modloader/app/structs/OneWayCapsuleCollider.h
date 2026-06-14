#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneWayCapsuleCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneWayCapsuleCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider_DEFINED)
#include <Modloader/app/structs/OneWayCapsuleCollider__Fields.h>
#if defined(IL2CPP_STRUCT_OneWayCapsuleCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_OneWayCapsuleCollider_DEFINED
struct OneWayCapsuleCollider__Class;
struct OneWayCapsuleCollider {
    struct OneWayCapsuleCollider__Class* klass;
    MonitorData* monitor;
    struct OneWayCapsuleCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider_FWDDECL)
#define IL2CPP_STRUCT_OneWayCapsuleCollider_FWDDECL
#include <Modloader/app/structs/OneWayCapsuleCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_OneWayCapsuleCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneWayCapsuleCollider_DEFINED) && !defined(IL2CPP_STRUCT_OneWayCapsuleCollider_FWDDECL)
#include <Modloader/app/structs/OneWayCapsuleCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneWayCapsuleCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
