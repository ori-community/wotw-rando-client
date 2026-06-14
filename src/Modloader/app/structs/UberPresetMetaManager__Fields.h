#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPresetMetaManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPresetMetaManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetMetaManager__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPresetMetaManager__Fields_DEFINED
struct UberPresetMetaManager_OnAssetListChangedCB;
struct List_1_UberPresetAsset_;
struct UberPresetMetaManager__Fields {
    struct ScriptableObject__Fields _;
    struct UberPresetMetaManager_OnAssetListChangedCB* OnAssetListChanged;
    struct List_1_UberPresetAsset_* m_presetAssets;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPresetMetaManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPresetMetaManager__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberPresetAsset_.h>
#include <Modloader/app/structs/UberPresetMetaManager_OnAssetListChangedCB.h>
#endif
#undef IL2CPP_STRUCT_UberPresetMetaManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetMetaManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPresetMetaManager__Fields_FWDDECL)
#include <Modloader/app/structs/UberPresetMetaManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPresetMetaManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
