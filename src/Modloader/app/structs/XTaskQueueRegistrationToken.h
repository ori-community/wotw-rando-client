#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XTaskQueueRegistrationToken_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XTaskQueueRegistrationToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTaskQueueRegistrationToken_DEFINED)
#define IL2CPP_STRUCT_XTaskQueueRegistrationToken_DEFINED
struct XTaskQueueRegistrationToken {
    uint64_t token;
};
#endif
#if !defined(IL2CPP_STRUCT_XTaskQueueRegistrationToken_FWDDECL)
#define IL2CPP_STRUCT_XTaskQueueRegistrationToken_FWDDECL
#endif
#undef IL2CPP_STRUCT_XTaskQueueRegistrationToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_XTaskQueueRegistrationToken_DEFINED) && !defined(IL2CPP_STRUCT_XTaskQueueRegistrationToken_FWDDECL)
#include <Modloader/app/structs/XTaskQueueRegistrationToken.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XTaskQueueRegistrationToken.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
