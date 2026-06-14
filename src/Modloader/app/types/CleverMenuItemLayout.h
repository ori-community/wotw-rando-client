#pragma once
#include <Modloader/app/structs/CleverMenuItemLayout.h>
#include <Modloader/app/structs/CleverMenuItemLayout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemLayout {
        inline app::CleverMenuItemLayout__Class** type_info() {
            static app::CleverMenuItemLayout__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemLayout__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemLayout__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemLayout__Class>(type_info(), "", "CleverMenuItemLayout");
        }
        inline app::CleverMenuItemLayout* create() {
            return il2cpp::create_object<app::CleverMenuItemLayout>(get_class());
        }
    } // namespace CleverMenuItemLayout
} // namespace app::classes::types
