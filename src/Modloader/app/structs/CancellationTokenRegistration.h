#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellationTokenRegistration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellationTokenRegistration_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationTokenRegistration_DEFINED)
#include <Modloader/app/structs/SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_.h>
#if defined(IL2CPP_STRUCT_SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo__DEFINED)
#define IL2CPP_STRUCT_CancellationTokenRegistration_DEFINED
struct CancellationCallbackInfo;
struct CancellationTokenRegistration {
    struct CancellationCallbackInfo* m_callbackInfo;
    struct SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ m_registrationInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancellationTokenRegistration_FWDDECL)
#define IL2CPP_STRUCT_CancellationTokenRegistration_FWDDECL
#include <Modloader/app/structs/CancellationCallbackInfo.h>
#endif
#undef IL2CPP_STRUCT_CancellationTokenRegistration_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationTokenRegistration_DEFINED) && !defined(IL2CPP_STRUCT_CancellationTokenRegistration_FWDDECL)
#include <Modloader/app/structs/CancellationTokenRegistration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellationTokenRegistration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
