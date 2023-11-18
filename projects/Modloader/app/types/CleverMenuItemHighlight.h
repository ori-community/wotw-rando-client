#pragma once
#include <Modloader/app/structs/CleverMenuItemHighlight.h>
#include <Modloader/app/structs/CleverMenuItemHighlight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItemHighlight {
        inline app::CleverMenuItemHighlight__Class** type_info() {
            static app::CleverMenuItemHighlight__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItemHighlight__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItemHighlight__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemHighlight__Class>(type_info(), "", "CleverMenuItemHighlight");
        }
        inline app::CleverMenuItemHighlight* create() {
            return il2cpp::create_object<app::CleverMenuItemHighlight>(get_class());
        }
    } // namespace CleverMenuItemHighlight
} // namespace app::classes::types
