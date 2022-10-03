#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WiggleTreeController_WiggleSettings {
        namespace {
            app::WiggleTreeController_WiggleSettings__Class* type_info_ref = nullptr;
        }
        app::WiggleTreeController_WiggleSettings__Class** type_info = &type_info_ref;
        inline app::WiggleTreeController_WiggleSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::WiggleTreeController_WiggleSettings__Class>(type_info, "", "WiggleTreeController", "WiggleSettings");
        }
        inline app::WiggleTreeController_WiggleSettings* create() {
            return il2cpp::create_object<app::WiggleTreeController_WiggleSettings>(get_class());
        }
        inline app::WiggleTreeController_WiggleSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::WiggleTreeController_WiggleSettings__Array>(get_class(), size);
        }
    } // namespace WiggleTreeController_WiggleSettings
} // namespace app::classes::types
