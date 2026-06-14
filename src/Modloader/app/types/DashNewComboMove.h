#pragma once
#include <Modloader/app/structs/DashNewComboMove.h>
#include <Modloader/app/structs/DashNewComboMove__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashNewComboMove {
        inline app::DashNewComboMove__Class** type_info() {
            static app::DashNewComboMove__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashNewComboMove__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashNewComboMove__Class* get_class() {
            return il2cpp::get_class<app::DashNewComboMove__Class>(type_info(), "Moon.ComboSystem", "DashNewComboMove");
        }
        inline app::DashNewComboMove* create() {
            return il2cpp::create_object<app::DashNewComboMove>(get_class());
        }
    } // namespace DashNewComboMove
} // namespace app::classes::types
