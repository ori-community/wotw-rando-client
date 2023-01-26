#pragma once
#include <Modloader/app/structs/ControlScreenUIItem.h>
#include <Modloader/app/structs/ControlScreenUIItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlScreenUIItem {
        inline app::ControlScreenUIItem__Class** type_info() {
            static app::ControlScreenUIItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControlScreenUIItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControlScreenUIItem__Class* get_class() {
            return il2cpp::get_class<app::ControlScreenUIItem__Class>(type_info(), "", "ControlScreenUIItem");
        }
        inline app::ControlScreenUIItem* create() {
            return il2cpp::create_object<app::ControlScreenUIItem>(get_class());
        }
    } // namespace ControlScreenUIItem
} // namespace app::classes::types
