#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievementMediaAsset_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievementMediaAsset_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementMediaAsset_1_DEFINED)
#include <Modloader/app/structs/UTF8StringPtr.h>
#include <Modloader/app/structs/XblAchievementMediaAssetType__Enum.h>
#if defined(IL2CPP_STRUCT_UTF8StringPtr_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementMediaAssetType__Enum_DEFINED)
#define IL2CPP_STRUCT_XblAchievementMediaAsset_1_DEFINED
struct XblAchievementMediaAsset_1 {
    struct UTF8StringPtr name;
    XblAchievementMediaAssetType__Enum mediaAssetType;

    struct UTF8StringPtr url;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievementMediaAsset_1_FWDDECL)
#define IL2CPP_STRUCT_XblAchievementMediaAsset_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_XblAchievementMediaAsset_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementMediaAsset_1_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievementMediaAsset_1_FWDDECL)
#include <Modloader/app/structs/XblAchievementMediaAsset_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievementMediaAsset_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
