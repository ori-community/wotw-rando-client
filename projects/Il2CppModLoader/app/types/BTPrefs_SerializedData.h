#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BTPrefs_SerializedData {
        namespace {
            inline app::BTPrefs_SerializedData__Class* type_info_ref = nullptr;
        }
        inline app::BTPrefs_SerializedData__Class** type_info = &type_info_ref;
        inline app::BTPrefs_SerializedData__Class* get_class() {
            return il2cpp::get_nested_class<app::BTPrefs_SerializedData__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "BTPrefs", "SerializedData");
        }
        inline app::BTPrefs_SerializedData* create() {
            return il2cpp::create_object<app::BTPrefs_SerializedData>(get_class());
        }
    } // namespace BTPrefs_SerializedData
} // namespace app::classes::types
