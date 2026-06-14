#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRegistrationToken__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRegistrationToken__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRegistrationToken__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/XTaskQueueRegistrationToken.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED) && defined(IL2CPP_STRUCT_XTaskQueueRegistrationToken_DEFINED)
#define IL2CPP_STRUCT_XRegistrationToken__Fields_DEFINED
struct __declspec(align(8)) XRegistrationToken__Fields {
    struct GCHandle _CallbackHandle_k__BackingField;
    struct XTaskQueueRegistrationToken _Token_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRegistrationToken__Fields_FWDDECL)
#define IL2CPP_STRUCT_XRegistrationToken__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_XRegistrationToken__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRegistrationToken__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XRegistrationToken__Fields_FWDDECL)
#include <Modloader/app/structs/XRegistrationToken__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRegistrationToken__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
