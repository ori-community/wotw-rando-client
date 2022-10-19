#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolPrefabSetting {
        namespace {
            inline app::UberPoolPrefabSetting__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolPrefabSetting__Class** type_info = &type_info_ref;
        inline app::UberPoolPrefabSetting__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrefabSetting__Class>(type_info, "", "UberPoolPrefabSetting");
        }
        inline app::UberPoolPrefabSetting* create() {
            return il2cpp::create_object<app::UberPoolPrefabSetting>(get_class());
        }
        inline app::UberPoolPrefabSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolPrefabSetting__Array>(get_class(), size);
        }
        inline app::UberPoolPrefabSetting__Array* create_array(const std::vector<app::UberPoolPrefabSetting*>& items) {
            return il2cpp::array_new<app::UberPoolPrefabSetting__Array>(get_class(), items);
        }
    } // namespace UberPoolPrefabSetting
} // namespace app::classes::types
