#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_DEFINED)
#include <Modloader/app/structs/AmplifyColorTriggerProxyBase__Fields.h>
#if defined(IL2CPP_STRUCT_AmplifyColorTriggerProxyBase__Fields_DEFINED)
#define IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_DEFINED
struct SphereCollider;
struct Rigidbody;
struct AmplifyColorTriggerProxy__Fields {
    struct AmplifyColorTriggerProxyBase__Fields _;
    struct SphereCollider* sphereCollider;
    struct Rigidbody* rigidBody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#endif
#undef IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AmplifyColorTriggerProxy__Fields_FWDDECL)
#include <Modloader/app/structs/AmplifyColorTriggerProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmplifyColorTriggerProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
