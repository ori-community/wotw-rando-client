#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabStatistics__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabStatistics__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabStatistics__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabStatistics__Fields_DEFINED
struct ISignInProvider;
struct List_1_SystemIntegration_CacheData_;
struct __declspec(align(8)) PlayFabStatistics__Fields {
    struct ISignInProvider* m_primarySignInProvider;
    struct ISignInProvider* m_secondarySignInProvider;
    struct List_1_SystemIntegration_CacheData_* m_cachedData;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabStatistics__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabStatistics__Fields_FWDDECL
#include <Modloader/app/structs/ISignInProvider.h>
#include <Modloader/app/structs/List_1_SystemIntegration_CacheData_.h>
#endif
#undef IL2CPP_STRUCT_PlayFabStatistics__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabStatistics__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabStatistics__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabStatistics__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabStatistics__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
