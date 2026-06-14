#pragma once
#include <Modloader/app/structs/CleverValueSliderHideMenu.h>
#include <Modloader/app/structs/CleverValueSliderHideMenu__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverValueSliderHideMenu {
        inline app::CleverValueSliderHideMenu__Class** type_info() {
            static app::CleverValueSliderHideMenu__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverValueSliderHideMenu__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverValueSliderHideMenu__Class* get_class() {
            return il2cpp::get_class<app::CleverValueSliderHideMenu__Class>(type_info(), "", "CleverValueSliderHideMenu");
        }
        inline app::CleverValueSliderHideMenu* create() {
            return il2cpp::create_object<app::CleverValueSliderHideMenu>(get_class());
        }
    } // namespace CleverValueSliderHideMenu
} // namespace app::classes::types
