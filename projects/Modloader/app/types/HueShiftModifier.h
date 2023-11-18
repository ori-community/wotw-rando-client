#pragma once
#include <Modloader/app/structs/HueShiftModifier.h>
#include <Modloader/app/structs/HueShiftModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HueShiftModifier {
        inline app::HueShiftModifier__Class** type_info() {
            static app::HueShiftModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HueShiftModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HueShiftModifier__Class* get_class() {
            return il2cpp::get_class<app::HueShiftModifier__Class>(type_info(), "", "HueShiftModifier");
        }
        inline app::HueShiftModifier* create() {
            return il2cpp::create_object<app::HueShiftModifier>(get_class());
        }
    } // namespace HueShiftModifier
} // namespace app::classes::types
