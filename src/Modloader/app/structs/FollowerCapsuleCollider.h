#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FollowerCapsuleCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FollowerCapsuleCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider_DEFINED)
#include <Modloader/app/structs/FollowerCapsuleCollider__Fields.h>
#if defined(IL2CPP_STRUCT_FollowerCapsuleCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_FollowerCapsuleCollider_DEFINED
struct FollowerCapsuleCollider__Class;
struct FollowerCapsuleCollider {
    struct FollowerCapsuleCollider__Class* klass;
    MonitorData* monitor;
    struct FollowerCapsuleCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider_FWDDECL)
#define IL2CPP_STRUCT_FollowerCapsuleCollider_FWDDECL
#include <Modloader/app/structs/FollowerCapsuleCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_FollowerCapsuleCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_FollowerCapsuleCollider_DEFINED) && !defined(IL2CPP_STRUCT_FollowerCapsuleCollider_FWDDECL)
#include <Modloader/app/structs/FollowerCapsuleCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FollowerCapsuleCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
