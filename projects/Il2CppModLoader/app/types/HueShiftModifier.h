#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HueShiftModifier {
        namespace {
            app::HueShiftModifier__Class* type_info_ref = nullptr;
        }
        app::HueShiftModifier__Class** type_info = &type_info_ref;
        inline app::HueShiftModifier__Class* get_class() {
            return il2cpp::get_class<app::HueShiftModifier__Class>(type_info, "", "HueShiftModifier");
        }
        inline app::HueShiftModifier* create() {
            return il2cpp::create_object<app::HueShiftModifier>(get_class());
        }
    } // namespace HueShiftModifier
} // namespace app::classes::types
