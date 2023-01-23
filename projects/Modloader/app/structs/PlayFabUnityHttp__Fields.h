#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabUnityHttp__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabUnityHttp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabUnityHttp__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabUnityHttp__Fields_DEFINED
struct String;
struct __declspec(align(8)) PlayFabUnityHttp__Fields {
    bool _isInitialized;
    int32_t _pendingWwwMessages;
    struct String* _AuthKey_k__BackingField;
    struct String* _EntityToken_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabUnityHttp__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabUnityHttp__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabUnityHttp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabUnityHttp__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabUnityHttp__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabUnityHttp__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabUnityHttp__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
