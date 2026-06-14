#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_DEFINED)
#include <Modloader/app/structs/AmplifyColorTriggerProxyBase__Fields.h>
#if defined(IL2CPP_STRUCT_AmplifyColorTriggerProxyBase__Fields_DEFINED)
#define IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_DEFINED
struct CircleCollider2D;
struct Rigidbody2D;
struct AmplifyColorTriggerProxy2D__Fields {
    struct AmplifyColorTriggerProxyBase__Fields _;
    struct CircleCollider2D* circleCollider;
    struct Rigidbody2D* rigidBody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_FWDDECL)
#define IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_FWDDECL
#include <Modloader/app/structs/CircleCollider2D.h>
#include <Modloader/app/structs/Rigidbody2D.h>
#endif
#undef IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AmplifyColorTriggerProxy2D__Fields_FWDDECL)
#include <Modloader/app/structs/AmplifyColorTriggerProxy2D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmplifyColorTriggerProxy2D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
