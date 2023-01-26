#pragma once
#include <Modloader/app/structs/SpiritSpearComboMove.h>
#include <Modloader/app/structs/SpiritSpearComboMove__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritSpearComboMove {
        inline app::SpiritSpearComboMove__Class** type_info() {
            static app::SpiritSpearComboMove__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritSpearComboMove__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritSpearComboMove__Class* get_class() {
            return il2cpp::get_class<app::SpiritSpearComboMove__Class>(type_info(), "Moon.ComboSystem", "SpiritSpearComboMove");
        }
        inline app::SpiritSpearComboMove* create() {
            return il2cpp::create_object<app::SpiritSpearComboMove>(get_class());
        }
    } // namespace SpiritSpearComboMove
} // namespace app::classes::types
