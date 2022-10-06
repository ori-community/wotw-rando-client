#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterPocket {
        namespace {
            app::PoisonousWaterPocket__Class* type_info_ref = nullptr;
        }
        app::PoisonousWaterPocket__Class** type_info = &type_info_ref;
        inline app::PoisonousWaterPocket__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterPocket__Class>(type_info, "", "PoisonousWaterPocket");
        }
        inline app::PoisonousWaterPocket* create() {
            return il2cpp::create_object<app::PoisonousWaterPocket>(get_class());
        }
        inline app::PoisonousWaterPocket__Array* create_array(int size) {
            return il2cpp::array_new<app::PoisonousWaterPocket__Array>(get_class(), size);
        }
        inline app::PoisonousWaterPocket__Array* create_array(const std::vector<app::PoisonousWaterPocket*>& items) {
            return il2cpp::array_new<app::PoisonousWaterPocket__Array>(get_class(), items);
        }
    } // namespace PoisonousWaterPocket
} // namespace app::classes::types
