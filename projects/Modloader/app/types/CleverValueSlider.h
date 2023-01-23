#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CleverValueSlider__Class.h>
#include <Modloader/app/structs/CleverValueSlider.h>

namespace app::classes::types {
    namespace CleverValueSlider {
        namespace {
            inline app::CleverValueSlider__Class* type_info_ref = nullptr;
        }
        inline app::CleverValueSlider__Class** type_info = &type_info_ref;
        inline app::CleverValueSlider__Class* get_class() {
            return il2cpp::get_class<app::CleverValueSlider__Class>(type_info, "", "CleverValueSlider");
        }
        inline app::CleverValueSlider* create() {
            return il2cpp::create_object<app::CleverValueSlider>(get_class());
        }
    } // namespace CleverValueSlider
} // namespace app::classes::types
