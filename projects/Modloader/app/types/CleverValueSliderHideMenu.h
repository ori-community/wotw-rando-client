#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverValueSliderHideMenu {
        namespace {
            inline app::CleverValueSliderHideMenu__Class* type_info_ref = nullptr;
        }
        inline app::CleverValueSliderHideMenu__Class** type_info = &type_info_ref;
        inline app::CleverValueSliderHideMenu__Class* get_class() {
            return il2cpp::get_class<app::CleverValueSliderHideMenu__Class>(type_info, "", "CleverValueSliderHideMenu");
        }
        inline app::CleverValueSliderHideMenu* create() {
            return il2cpp::create_object<app::CleverValueSliderHideMenu>(get_class());
        }
    } // namespace CleverValueSliderHideMenu
} // namespace app::classes::types
