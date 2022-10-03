#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoisonousWaterPocket__Array {
        namespace {
            app::PoisonousWaterPocket__Array__Class* type_info_ref = nullptr;
        }
        app::PoisonousWaterPocket__Array__Class** type_info = &type_info_ref;
        inline app::PoisonousWaterPocket__Array__Class* get_class() {
            return il2cpp::get_class<app::PoisonousWaterPocket__Array__Class>(type_info, "", "PoisonousWaterPocket[]");
        }
        inline app::PoisonousWaterPocket__Array* create() {
            return il2cpp::create_object<app::PoisonousWaterPocket__Array>(get_class());
        }
    } // namespace PoisonousWaterPocket__Array
} // namespace app::classes::types
