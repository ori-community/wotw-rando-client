#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabAchievements__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabAchievements__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabAchievements__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabAchievements__Fields_DEFINED
struct CacheData__Array;
struct __declspec(align(8)) PlayFabAchievements__Fields {
    bool _IsSynchronising_k__BackingField;
    bool _HasSynchronised_k__BackingField;
    struct CacheData__Array* m_cachedData;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabAchievements__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabAchievements__Fields_FWDDECL
#include <Modloader/app/structs/CacheData__Array.h>
#endif
#undef IL2CPP_STRUCT_PlayFabAchievements__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabAchievements__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabAchievements__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabAchievements__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabAchievements__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
