#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritSpearComboMove {
        namespace {
            app::SpiritSpearComboMove__Class* type_info_ref = nullptr;
        }
        app::SpiritSpearComboMove__Class** type_info = &type_info_ref;
        inline app::SpiritSpearComboMove__Class* get_class() {
            return il2cpp::get_class<app::SpiritSpearComboMove__Class>(type_info, "Moon.ComboSystem", "SpiritSpearComboMove");
        }
        inline app::SpiritSpearComboMove* create() {
            return il2cpp::create_object<app::SpiritSpearComboMove>(get_class());
        }
    } // namespace SpiritSpearComboMove
} // namespace app::classes::types
