#pragma once
#include <Modloader/app/structs/SpiritLeashComboMove.h>
#include <Modloader/app/structs/SpiritLeashComboMove__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashComboMove {
        inline app::SpiritLeashComboMove__Class** type_info() {
            static app::SpiritLeashComboMove__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashComboMove__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashComboMove__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashComboMove__Class>(type_info(), "Moon.ComboSystem", "SpiritLeashComboMove");
        }
        inline app::SpiritLeashComboMove* create() {
            return il2cpp::create_object<app::SpiritLeashComboMove>(get_class());
        }
    } // namespace SpiritLeashComboMove
} // namespace app::classes::types
