#pragma once
#include <Modloader/app/structs/BTPrefs_SerializedData.h>
#include <Modloader/app/structs/BTPrefs_SerializedData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BTPrefs_SerializedData {
        inline app::BTPrefs_SerializedData__Class** type_info() {
            static app::BTPrefs_SerializedData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BTPrefs_SerializedData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BTPrefs_SerializedData__Class* get_class() {
            return il2cpp::get_nested_class<app::BTPrefs_SerializedData__Class>(type_info(), "Moon.BehaviourSystem.BTEditor", "BTPrefs", "SerializedData");
        }
        inline app::BTPrefs_SerializedData* create() {
            return il2cpp::create_object<app::BTPrefs_SerializedData>(get_class());
        }
    } // namespace BTPrefs_SerializedData
} // namespace app::classes::types
