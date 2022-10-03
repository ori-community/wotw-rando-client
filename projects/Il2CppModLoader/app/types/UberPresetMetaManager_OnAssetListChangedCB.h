#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetMetaManager_OnAssetListChangedCB {
        namespace {
            app::UberPresetMetaManager_OnAssetListChangedCB__Class* type_info_ref = nullptr;
        }
        app::UberPresetMetaManager_OnAssetListChangedCB__Class** type_info = &type_info_ref;
        inline app::UberPresetMetaManager_OnAssetListChangedCB__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetMetaManager_OnAssetListChangedCB__Class>(type_info, "", "UberPresetMetaManager", "OnAssetListChangedCB");
        }
        inline app::UberPresetMetaManager_OnAssetListChangedCB* create() {
            return il2cpp::create_object<app::UberPresetMetaManager_OnAssetListChangedCB>(get_class());
        }
    } // namespace UberPresetMetaManager_OnAssetListChangedCB
} // namespace app::classes::types
