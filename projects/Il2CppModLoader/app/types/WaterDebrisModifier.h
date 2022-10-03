#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterDebrisModifier {
        namespace {
            app::WaterDebrisModifier__Class* type_info_ref = nullptr;
        }
        app::WaterDebrisModifier__Class** type_info = &type_info_ref;
        inline app::WaterDebrisModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterDebrisModifier__Class>(type_info, "", "WaterDebrisModifier");
        }
        inline app::WaterDebrisModifier* create() {
            return il2cpp::create_object<app::WaterDebrisModifier>(get_class());
        }
    } // namespace WaterDebrisModifier
} // namespace app::classes::types
