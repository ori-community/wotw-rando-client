#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterLineModifier {
        namespace {
            app::WaterLineModifier__Class* type_info_ref = nullptr;
        }
        app::WaterLineModifier__Class** type_info = &type_info_ref;
        inline app::WaterLineModifier__Class* get_class() {
            return il2cpp::get_class<app::WaterLineModifier__Class>(type_info, "", "WaterLineModifier");
        }
        inline app::WaterLineModifier* create() {
            return il2cpp::create_object<app::WaterLineModifier>(get_class());
        }
    } // namespace WaterLineModifier
} // namespace app::classes::types
