#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneMetaData_PlayerAbilityInfo {
        namespace {
            inline app::SceneMetaData_PlayerAbilityInfo__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData_PlayerAbilityInfo__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_PlayerAbilityInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_PlayerAbilityInfo__Class>(type_info, "", "SceneMetaData", "PlayerAbilityInfo");
        }
        inline app::SceneMetaData_PlayerAbilityInfo* create() {
            return il2cpp::create_object<app::SceneMetaData_PlayerAbilityInfo>(get_class());
        }
        inline app::SceneMetaData_PlayerAbilityInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData_PlayerAbilityInfo__Array>(get_class(), size);
        }
        inline app::SceneMetaData_PlayerAbilityInfo__Array* create_array(const std::vector<app::SceneMetaData_PlayerAbilityInfo*>& items) {
            return il2cpp::array_new<app::SceneMetaData_PlayerAbilityInfo__Array>(get_class(), items);
        }
    } // namespace SceneMetaData_PlayerAbilityInfo
} // namespace app::classes::types
