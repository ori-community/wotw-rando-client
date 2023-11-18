#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalUser_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalUser_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUser_1__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/XalUser_InternalXalUserGetTokenAndSignatureArgs.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED) && defined(IL2CPP_STRUCT_XalUser_InternalXalUserGetTokenAndSignatureArgs_DEFINED)
#define IL2CPP_STRUCT_XalUser_1__Fields_DEFINED
struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_;
struct __declspec(align(8)) XalUser_1__Fields {
    struct EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_* UserChanged;
    void* pUserHandle;
    void* pAsyncQueue;
    uint64_t pUserChangeHandlerToken;
    struct GCHandle userGCHandle;
    struct XalUser_InternalXalUserGetTokenAndSignatureArgs result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalUser_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_XalUser_1__Fields_FWDDECL
#include <Modloader/app/structs/EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_.h>
#endif
#undef IL2CPP_STRUCT_XalUser_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalUser_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XalUser_1__Fields_FWDDECL)
#include <Modloader/app/structs/XalUser_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalUser_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
