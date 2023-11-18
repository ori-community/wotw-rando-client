#pragma once
#include <Modloader/app/structs/UberPresetMetaManager_OnAssetListChangedCB.h>
#include <Modloader/app/structs/UberPresetMetaManager_OnAssetListChangedCB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetMetaManager_OnAssetListChangedCB {
        inline app::UberPresetMetaManager_OnAssetListChangedCB__Class** type_info() {
            static app::UberPresetMetaManager_OnAssetListChangedCB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPresetMetaManager_OnAssetListChangedCB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPresetMetaManager_OnAssetListChangedCB__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetMetaManager_OnAssetListChangedCB__Class>(type_info(), "", "UberPresetMetaManager", "OnAssetListChangedCB");
        }
        inline app::UberPresetMetaManager_OnAssetListChangedCB* create() {
            return il2cpp::create_object<app::UberPresetMetaManager_OnAssetListChangedCB>(get_class());
        }
    } // namespace UberPresetMetaManager_OnAssetListChangedCB
} // namespace app::classes::types
