#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterPurityLogic {
        namespace {
            app::WaterPurityLogic__Class* type_info_ref = nullptr;
        }
        app::WaterPurityLogic__Class** type_info = &type_info_ref;
        inline app::WaterPurityLogic__Class* get_class() {
            return il2cpp::get_class<app::WaterPurityLogic__Class>(type_info, "", "WaterPurityLogic");
        }
        inline app::WaterPurityLogic* create() {
            return il2cpp::create_object<app::WaterPurityLogic>(get_class());
        }
    } // namespace WaterPurityLogic
} // namespace app::classes::types
