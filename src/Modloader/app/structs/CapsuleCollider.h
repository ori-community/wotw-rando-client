#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CapsuleCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CapsuleCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CapsuleCollider_DEFINED)
#include <Modloader/app/structs/CapsuleCollider__Fields.h>
#if defined(IL2CPP_STRUCT_CapsuleCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_CapsuleCollider_DEFINED
struct CapsuleCollider__Class;
struct CapsuleCollider {
    struct CapsuleCollider__Class* klass;
    MonitorData* monitor;
    struct CapsuleCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CapsuleCollider_FWDDECL)
#define IL2CPP_STRUCT_CapsuleCollider_FWDDECL
#include <Modloader/app/structs/CapsuleCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_CapsuleCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CapsuleCollider_DEFINED) && !defined(IL2CPP_STRUCT_CapsuleCollider_FWDDECL)
#include <Modloader/app/structs/CapsuleCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CapsuleCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
