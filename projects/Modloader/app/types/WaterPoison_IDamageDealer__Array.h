#pragma once
#include <Modloader/app/structs/WaterPoison_IDamageDealer__Array.h>
#include <Modloader/app/structs/WaterPoison_IDamageDealer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoison_IDamageDealer__Array {
        inline app::WaterPoison_IDamageDealer__Array__Class** type_info() {
            static app::WaterPoison_IDamageDealer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterPoison_IDamageDealer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterPoison_IDamageDealer__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterPoison_IDamageDealer__Array__Class>(type_info(), "", "WaterPoison+IDamageDealer[]");
        }
        inline app::WaterPoison_IDamageDealer__Array* create() {
            return il2cpp::create_object<app::WaterPoison_IDamageDealer__Array>(get_class());
        }
    } // namespace WaterPoison_IDamageDealer__Array
} // namespace app::classes::types
