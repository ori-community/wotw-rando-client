#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterPoison_IDamageDealer__Array {
        namespace {
            app::WaterPoison_IDamageDealer__Array__Class* type_info_ref = nullptr;
        }
        app::WaterPoison_IDamageDealer__Array__Class** type_info = &type_info_ref;
        inline app::WaterPoison_IDamageDealer__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterPoison_IDamageDealer__Array__Class>(type_info, "", "WaterPoison+IDamageDealer[]");
        }
        inline app::WaterPoison_IDamageDealer__Array* create() {
            return il2cpp::create_object<app::WaterPoison_IDamageDealer__Array>(get_class());
        }
    } // namespace WaterPoison_IDamageDealer__Array
} // namespace app::classes::types
