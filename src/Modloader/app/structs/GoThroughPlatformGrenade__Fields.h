#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_DEFINED
struct Collider;
struct Rigidbody;
struct GoThroughPlatformGrenade__Fields {
    struct Suspendable__Fields _;
    struct Collider* Collider;
    struct Rigidbody* Rigidbody;
    bool _IsSuspended_k__BackingField;
    bool m_wasFalling;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_FWDDECL)
#define IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GoThroughPlatformGrenade__Fields_FWDDECL)
#include <Modloader/app/structs/GoThroughPlatformGrenade__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoThroughPlatformGrenade__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
