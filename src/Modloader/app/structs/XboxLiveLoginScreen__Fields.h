#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_DEFINED
struct MessageProvider;
struct MessageBox;
struct Byte__Array;
struct CancellationTokenSource;
struct XboxLiveLoginScreen__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* errorMessageProvider;
    struct MessageProvider* tryAgainMessageProvider;
    struct MessageProvider* urlAndCodeMessageProvider;
    struct MessageProvider* signingInMessageProvider;
    struct MessageBox* m_messageBox;
    struct Byte__Array* m_bytes;
    bool m_didRequestNsaId;
    struct CancellationTokenSource* m_cancellationTokenSource;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxLiveLoginScreen__Fields_FWDDECL)
#include <Modloader/app/structs/XboxLiveLoginScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxLiveLoginScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
