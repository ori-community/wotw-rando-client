#pragma once
#include <Modloader/app/structs/UberPoolPrefabSetting.h>
#include <Modloader/app/structs/UberPoolPrefabSetting__Array.h>
#include <Modloader/app/structs/UberPoolPrefabSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPrefabSetting {
        inline app::UberPoolPrefabSetting__Class** type_info() {
            static app::UberPoolPrefabSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPrefabSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPrefabSetting__Class* get_class() {
            return il2cpp::get_class<app::UberPoolPrefabSetting__Class>(type_info(), "", "UberPoolPrefabSetting");
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
